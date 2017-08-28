//finding the middle element in a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
}
*head=NULL,*temp,*temp1,*temp2,*temp3,*temp4;

int findmid()
{
  printf("In findmin function");
  printf("\n");
  temp1=head;
  temp2=head;
  temp3=head;
  temp4=head;


  while(temp3!=NULL||temp4!=NULL)
  {
    printf("In while loop\n");
    temp3=temp2->next;
    temp4=temp2->next->next;

  //  temp3=temp1;
  //  temp4=temp2;
    temp1=temp1->next;
    temp2=temp2->next->next;

    printf("temp1=%d\ntemp2=%d\n",temp3->data,temp4->data);
  }
  printf("The middle element is %d",temp1->data);
  printf("hey\n");
}

int push()

{
  struct node *new_node=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data\n" );
  scanf("%d",&new_node->data);
  if(head==NULL)
  {
    head=new_node;
    temp=head;
  }
  else
  {
    temp->next=new_node;
    temp=new_node;
  }
  temp->next=NULL;

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
  int ch;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Find the middle element\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      {
        push();
      }
      break;
      case 2:
      {
          findmid();
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
