//Detecting a loop in liked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  int visited;
  struct node *next;
}
*head=NULL,*temp,*temp1,*cur;

int push()
{
  struct node *new_node_pointer=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data:\n");
  scanf("%d",&new_node_pointer->data);
  new_node_pointer->visited=0;
  if(head==NULL)
  {
    head=new_node_pointer;
    temp=head;
  }
  else
  {
    temp->next=new_node_pointer;
    temp=new_node_pointer;
  }
  temp->next=NULL;
}

int display()
{
  struct node * cur;

  cur=head;
  printf("The linked list is:\n");
  while(cur!=NULL)
  {
    printf("%d\t",cur->data);
    cur=cur->next;
  }
}

int detect_loop()
{
  temp1=head;
  while(temp1!=NULL&&temp1->visited==0)
  {
    temp1->visited=1;
    temp1=temp1->next;
    printf("hi\n");
  }
  if(temp1==NULL)
    printf("There is no loop:\n");
  else
    printf("There is a loop:\n");
}

int main()
{


  int ch;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Detect loop\n3.Display\n4.Exit\n");
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
         //head->next->next=head;
         detect_loop();
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
