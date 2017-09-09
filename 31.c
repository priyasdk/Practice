// Inserting in a sorted list
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
}
*head=NULL,*temp,*temp1,*temp2;


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
  temp1=head;
  while(temp1!=NULL)
  {
    printf("%d\n",temp1->data);
    temp1=temp1->next;
  }
}

int insert(int n)
{
  struct node * new= (struct node*)malloc(sizeof(struct node));
  new->data=n;
  if(head==NULL)
  {
    head=new;
    temp=head;
    temp->next=NULL;
  }
  else if(new->data<head->data)
  {
    temp=head;
    head=new;
    new->next=temp;
  }
  else
  {
    temp1=head;
    while(temp1->next!=NULL&&(new->data>temp1->next->data))
    {
      temp1=temp1->next;
    }
    printf("Temp1=%d\n",temp1->data);
    if(temp1->next==NULL)
    {
      temp1->next=new;
      new->next=NULL;
    }
    else
    {
    temp2=temp1->next;
    temp1->next=new;
    new->next=temp2;
  }
}


}

int main()
{
  int ch,k;
  do {
    printf("ENter your choice:\n");
    printf("1.Push\n2.Insert\n3.Display\n4.Exit\n");
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
        printf("Enter the data to be inserted:\n");
        scanf("%d",&k);
         insert(k);
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
