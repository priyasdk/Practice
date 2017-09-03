//Reversing a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
}
*head=NULL,*f1,*temp,*temp1,*f,*b,*ftemp;

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

int reverse()
{
  f=head->next;
  temp=f;
  b=head;
  printf("In reverse\n");

  f1=head;
  while(f1!=NULL)
  {
    if(b==head)
    {
      b->next=NULL;
    }
    ftemp=f;
    printf("ftemp=%d\n",ftemp->data);
    f1=f->next;
  //  printf("f1=%d\n",f1->data);
    f->next=b;
    if(f1==NULL)
    {
      head=f;
    }
    printf("f->nex=%d\n",f->next->data);
    f=f1;
  //  printf("f=%d\n",f->data);
    b=ftemp;
    printf("b=%d\n",b->data);
  }
}
void display()
{
  temp1=head;
  while(temp1!=NULL)
  {
    printf("%d\n",temp1->data);
    temp1=temp1->next;
  }
}


int main()
{
  int ch,k1,k2;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Reverse\n3.Display\n4.Exit\n");
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
         reverse();
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
