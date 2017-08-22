//Recursive code to find Length of linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
}
*head=NULL,*temp,*temp2;

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

int len(struct node *temp)
{
  if(temp==NULL)
  return 0;
  else
  return 1+len(temp->next);

}
int main()
{
  int ch,count;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Find length\n3.Display\n4.Exit\n");
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
        count=len(head);
        printf("length of linked list =%d\n",count);
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
