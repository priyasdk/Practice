//Insertion sort

#include<stdio.h>
#include<stdlib.h>

int insertionsort(int a[],int n)
{
  //printf("In sort");
  int i=0,j,t=-1,temp,temp1,k;
  while(i<n-1)
  {
    if(a[i]>a[i+1])
    {
      //printf("a[%d]=%d,a[%d]=%d\n",i,a[i],i+1,a[i+1]);
      j=0;
      t=-1;
      while(t!=0)
      {
    //    printf("In while loop:");
        if(a[i+1]>a[j])
        {
      //    printf("j=%d",j);
        j++;
        }
        else
        {
        //  printf("Im here.");
          temp=j;
          t=0;
        }
      }
      temp1=a[i+1];
      for(k=i;k>=j;k--)
      {
      //  temp2=a[]
        a[k+1]=a[k];
      }
      a[j]=temp1;
      //for(k=0;k<n;k++)
      //{
        //printf("%d\t",a[k]);
      //}
      //i++;
    }
    //else
    //printf("i=%d\t",i );
    i++;
  }
}
main()
{
  int a[20],n1,i;
  printf("Enter the size of the array:\n");
  scanf("%d",&n1);
  printf("Enter the array elements:\n");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a[i]);
    //printf("hi\n");
  }
  //printf("Hello\n");
  insertionsort(a,n1);
//  printf("after hello\n" );
  for(i=0;i<n1;i++)
  {
    printf("%d\t",a[i]);
  }
}
