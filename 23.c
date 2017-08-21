//Deleting first occurence of given key

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}
*head=NULL,*temp,*temp1,*temp2,*temp3;

int push()
{
  struct node *new_node_pointer=(struct node*)malloc(sizeof(struct node));
  printf ("Enter the data:\n");
  scanf("%d",&new_node_pointer->data);
  if(head==NULL)
  {
    head=new_node_pointer;
    temp=head;
    temp->next=NULL;
  }
  else
  {
    temp->next=new_node_pointer;
    temp=new_node_pointer;
    temp->next=NULL;
    printf("data=%d\t",temp->data);
  }
}

int del(int key)
{
  printf("In delete:\n");
  int i=0,n=0;
  //printf("i=%d\n",i);      //When there is a segmentation fault ,just to check where exactly the problem is,I tried to
  /*  temp1=head;            // put several printf statements just like the one to the left which prints i.
    if(head->data==key)
    i=1;
  //printf("%d\n",temp1->data);  // So when I tried printf("i=%d",i); (\n is ignored), 'i' was not printed but when \n was considered it printed i.
  /*while(temp1!=NULL&&i==0)   //So what is \n doing here?
  {
    printf("In while loop:\n");
    if(temp1->next->data==key&&temp1->next!=NULL)
       i=1;
    else if (temp1->next==NULL&&temp1->data==key)
       i=1;
    temp1=temp1->next;
  }
  printf("data=%d\n",temp1->data);
  */
  temp1=head;
  if(temp1->data==key)
  {
    head=temp1->next;
    free(temp1);
  }
  else
  {
  while(i==0)
  {
    if(temp1->data==key)

    i=1;

    else
    {
     temp1=temp1->next;
      n++;
    }

  }
  temp1=head;
  for(i=0;i<n-1;i++)
  {
    temp1=temp1->next;
  }
  temp3=temp1->next;
  temp1->next=temp3->next;
  free(temp3);
}

}

void display()
{
  temp2=head;
  while(temp2!=NULL)
  {
    printf("%d\n",temp2->data);
    temp2=temp2->next;
  }
}
int main()
{
  int ch,k,i=0;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      {
        push();
        i++;
      }
      break;
      case 2:
      {
        if(i>0)
        {
        printf("Enter key:\n");
        scanf("%d",&k);
        del(k);
        i--;
        }
        else
        printf("Deletion can't be done:\n");

      }
      break;
      case 3:
      {
        display();
      }
      break;
    }
  } while(ch>0&&ch<4);
}
