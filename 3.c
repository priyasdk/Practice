// arbitrary pointer pointing to the greatest value on its right side

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *arbit;
  struct node *next;
}
*head=NULL,*temp,*temp1,*temp2;

int reverse(int size)
{
  int i,j;
  temp1=head;
  temp=head;
  for(i=0;i<n/2;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      temp=temp->next;
    }
    temp2->data=temp1->data;
    temp1->data=temp->data;
    temp->data=temp2->data;
  }
}
int point(int size)
{
  int big,i;
  temp2=head;
  for(i=0;i<n;i++)
  {
    if(temp2->data<temp2->next->data&& temp2->next!=NULL)
    {
      big=temp2->next->data;
    }
    temp2=temp2->next;
  }

}
int main()
{
  int n,i;
  printf("Enter the no.of nodes in the linked list\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",newnode->data);
    newnode->arbit=NULL;
    if(head=NULL)
    {
      head=newnode;
      newnode->next=NULL;
    }
    else
    newnode->next=NULL;
  }
  reverse();
}
