#include<stdio.h>

int findsum(int a[],int size,int sum)
{
  int i,j;
  for(i=0;i<size;i++)
  {
    for(j=i;j<size;j++)
    {
      if(a[i]+a[j]==sum)
      {
       printf("The pairs are %d %d",a[i],a[j]);
      }
    }
  }
}
main()
{
  int a[20],i,j,n;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the sum:\n");
  scanf("%d",&j);
  findsum(a,n,j);
}
