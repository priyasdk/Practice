//selection sort
#include<stdio.h>

int findmin(int a[],int j,int n)
{
  int i,temp,q;
  q=0;
  temp=a[j];
  for(i=j;i<n-1;i++)
  {
       //temp=a[j]; //  if(a[i]>a[i+1])
      if(temp>a[i+1])
    {
    temp=a[i+1];
  //  printf("Temp=%d",temp);
//    printf("\n" );
    }
    else
    q++;
  }
  if(q==n-j-1)
  return a[j];
  else
  return temp;
}
int selectionsort(int a[],int n)
{
  int i,t,j=0,temp1,temp;
  while(j<n)
  {
//    printf("j=%d\t",j );
    t=findmin(a,j,n);
//    printf("t=%d",t );
//    printf("\n");
    for(i=j;i<n;i++)
    {
//      printf("In loop=%d",i);
      if(a[i]==t)
      {
        temp=i;
  //      printf("i=%d\t",i);
  //      printf("\n" );
      }
    }
    temp1=a[temp];
    a[temp]=a[j];
    a[j]=temp1;
  //  printf("a[%d]=%d",j,a[j]);
//    printf("a[%d]=%d",temp,a[temp]);
    j++;
  }
/*  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }*/

}
main()
{
  int a[20],n,i;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  selectionsort(a,n);
  printf("The sorted array is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}
