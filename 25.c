//Swapping nodes without swapping data // INCOMPLETE

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
}
*head=NULL,*temp,*temp1,*temp2,*temp3,*temp4,*temp5;

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

int swap(int key1,int key2)
{
  temp2=head;
  temp1=head;
     while(temp2->next->data!=key2)           //Swapping with head to be done correctly
    {
      temp2=temp2->next;
    }
    printf("temp2data=%d",temp2->data);
    while(head->data!=key1&&temp1->next->data!=key1)
    {
        temp1=temp->next;
    }
     struct node *temp_node1_pointer=(struct node*)malloc(sizeof(struct node));
     struct node *temp_node2_pointer=(struct node*)malloc(sizeof(struct node));
     temp_node1_pointer->data=temp2->next->data;   //Copying key2's data into newly created temporary node
     temp_node2_pointer->data=temp1->next->data;   //Same as above for key1

     if(head->data=key1)
     {
       head=temp_node2_pointer;
       head->next=temp1->next;
       free(temp1);
     }
     else
     {
       temp3=temp1->next;
       temp1->next=temp_node2_pointer;
       temp_node2_pointer->next=temp3->next;
       free(temp3);
     }
     if(temp2->next->next==NULL)
     {
         temp4=temp2->next;
         temp2->next=temp_node1_pointer;
         temp_node1_pointer->next=NULL;
         free(temp4);
     }
     else
     {
       temp4=temp2->next;
       temp2->next=temp_node1_pointer;
       temp_node1_pointer->next=temp4->next;
       free(temp4);
     }
   }
    /* temp_node_pointer->data=temp2->next->data;
     printf("tempdata=%d\t",temp_node_pointer->data);
     if(temp2->next->next!=NULL)
     temp3=temp2->next->next;
     else
     temp3=NULL;
     temp4=temp1->next->next;
     temp5=temp1->next;
     temp1->next=temp_node_pointer;
     temp_node_pointer->next=temp4;
  //temp2=temp2->next;
     //temp2->next=temp4;
     //temp1->next=temp4;
    // temp4->next=temp5;
    temp2->next=temp5;
    temp5->next=temp3;
  }
  //temp_node_pointer->next=temp2->next->next;
*/
int main()
{
  int ch,k1,k2;
  do {
    printf("ENter your choice:\n");
    printf("1.Insert\n2.Swap\n3.Display\n4.Exit\n");
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
        printf("Enter key1 and key2");
        scanf("%d %d",&k1,&k2);
        swap(k1,k2);

        /*count=len(head);
        printf("length of linked list =%d\n",count);*/
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
