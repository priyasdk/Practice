// Linked list : creating node and traversing

#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *next;
}
*head=NULL,*temp,*temp1;

int main()
{
  int ch;
  do {
    printf("Enter your choice:\n");
    printf("1.Insert\n2.Display\n3.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: {

        struct node *new_node_pointer = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d",&new_node_pointer->data);
        if(head==NULL)
        {
          head=new_node_pointer;
          temp1=new_node_pointer;
        }
        else
        {
          temp1->next=new_node_pointer;
          temp1=new_node_pointer;
      //    printf("data=%d",new_node->data);
        }
          new_node_pointer->next=NULL;
      }
      break;
      case 2:
      {
        temp=head;
        while(temp!=NULL)
        {
          printf("%d",temp->data);
          temp=temp->next;
        }
      }
      break;
    }
  } while(ch>0&&ch<3);

}
