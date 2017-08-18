// Zig Zag linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
}
*head=NULL,*temp,*temp1,*temp2,*temp3,*temp4;

int createnode(int d)
{
  struct node *newnode=malloc(sizeof(node));
  newnode->data=d;
  if(head=NULL)
  {
    head=newnode;
    temp2=newnode;
    temp2->next=NULL;
  }
  else
  {
    temp2=newnode;
    temp2->next=NULL;
  }

}
int zigzag()
{
  int flag=1;   // 1 for less than, 0 for greater than
  temp3=head;
  if(flag==1)
  {
  if(temp3->data > temp3->next->data)
    {
       temp4=temp3;
       temp3=temp3->next;
       temp3->next=temp4;
       flag=0;
    }
  }

main()
{
  int d,ch,key;
  do{
  printf("Enter your choice\n1.Create a node\n2.Create Zig Zag linked list\n3.Exit\n");
  scanf("%d",&ch);
  switch (ch) {
    case 1:{
      printf("Enter the data\n" );
      scanf("%d",&d);
      createnode(d);
      break;
    }
    case 2:{
      printf("Enter the key\n" );
      scanf("%d",&key);
      deletenode(key);
      break;
    }
  }
}while(ch<3);
}
