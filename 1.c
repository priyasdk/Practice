//Delete the last occurence of node
#include<stdio.h>
#include<stdlib.h> // this is a coment

struct node
{
  int data;
  struct node *next;
}
*head=NULL,*temp,*x,*temp1,*temp2,*temp3;

int deletenode(int key)
{
  temp=head;
  while(temp!=NULL)
  {
    if(temp->next->data==key && temp->next!=NULL)
    x=temp;
    temp=temp->next;
  //  if(temp->next=NULL && temp->data==key)
    //x=temp;
  }
  if(x->next->next!=NULL)
  {
    x->next=temp1;
    x->next=x->next->next;
    free(temp1);
  }
  if(x->next->next=NULL)
  {
    free(x->next);
  }
}
int createnode()
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  //newnode->data=d;
  printf("Enter data\n");
  scanf("%d",&newnode->data);
  //printf("%d\n",newnode->data);
  if(head=NULL)
  {
    head=newnode;
    //temp2=newnode;
    newnode->next=NULL;
  }
  else
  {
    temp2=newnode;
    temp2->next=NULL;
  }
//newnode->data=d;
}
void printlist()
{
  temp3=head;
  while(temp3!=NULL)
  {
    printf("%d",temp3->data);
    temp3=temp3->next;
  }
}
main()
{
  int d,ch,key;
  do{
  printf("Enter your choice\n1.Create a node\n2.Delete the last occurence\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch (ch) {
    case 1:{
  //    printf("Enter the data\n" );
    //  scanf("%d",&d);
      createnode();
      break;
    }
    case 2:{
      printf("Enter the key\n" );
      scanf("%d",&key);
      deletenode(key);
      break;
    }
    case 3:{
      printf("Hello");
      printlist();
      break;
    }
  }
}while(ch<4);
}
