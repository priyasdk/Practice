//Inserting in a linked list at 3 positions
//

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}
*head=NULL,*temp2,*temp,*temp1;

int push1()
{

     struct node *a=(struct node*)malloc(sizeof(struct node));
     printf("Enter the data:\n");
     scanf("%d",&a->data);
     if(head==NULL)
     {
       head=a;
      // temp=a;
       head->next=NULL;
     }
     else
     {
      /* temp->next=a;
       temp=a;
       temp->next=NULL;*/
       a->next=head;
       head=a;
       printf("%d",a->data);
    //   a=temp;
     }
}
int push2()
{
  int n,i;
  struct node *b=(struct node*)malloc(sizeof(struct node));
  printf("ENter the data:\n");
  scanf("%d",&b->data);
  printf("Enter after which node data has to be inserted:\n");
  scanf("%d",&n );
  temp=head;
  for(i=0;i<n-1;i++)
  {
    temp=temp->next;
  }
  if(temp->next!=NULL)
  {
    temp1=temp->next;
   temp->next=b;
   printf("hello=%d\n",temp->next->data);
  //b=temp->next;
//  b->next=temp1->next;
//  temp1=b->next;
    b->next=temp1;
  printf("bnext=%d\n",b->next->data );
  temp=b;
//  temp1=b;

  }
  else
  push3();
  //temp->next=NULL;
}
int push3()
{
  struct node* c = (struct node*)malloc(sizeof(struct node));
  printf("Enter the data\n");
  scanf("%d",&c->data);
  temp1=head;
  while(temp1->next!=NULL)
  {
    temp1=temp1->next;
  }
  temp1->next=c;
  temp1=c;
  temp1->next=NULL;
}
int display()
{
  temp2=head;
  while(temp2!=NULL)
  {
    printf("%d \t",temp2->data);
    printf("\n");
    temp2=temp2->next;
  }
}
main()
{
  int ch,i;
  do
  {
    printf("\n");
  printf("Enter your choice:\n ");
  printf("1.Insert at beginning\t2.Insert after a given node\t3.Insert at the end of list \t4.Display\t5.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:{
      push1();
      i++;
    }
    break;
    case 2:{
      push2();
      i++;
    }
    break;
    case 3:{
      push3();
      i++;
    }
    break;
    case 4:{
      display();
    }
    break;
  }
}while(ch>0&&ch<5);

}
