// Given a sorted and rotated array, find if there is a pair with a given sum
// Not working for few inputs
#include<stdio.h>

int findsum(int a[],int start,int end,int x,int size)
{
  printf("%d %d\n",start,end);
//  if(start<size-rn&&end>=size-rn)
   if(start!=end)
  {
   printf("in loop %d %d\n",start,end);

    if(a[start]+a[end]==x)
    printf("%d %d are the pair\n",a[start],a[end]);
    else if (a[start]+a[end]>x)
    findsum(a,start,end-1,x,size);
    else if(a[start]+a[end]<x)
      findsum(a,start+1,end,x,size);
  }
}
main()
{
  int a[20],n,i,r,x,j;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the elements of rotated array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the no.of elements rotated:\n");
  scanf("%d",&r);
  printf("Enter the sum:\n");
  scanf("%d",&x);
 if((a[n-r-1]+a[n-1])<x||a[0]+a[n-r]>x)
  printf("There is no such pair:\n");
  else
 {
   i=0;
   j=n-1;
   findsum(a,0,n-1-r,x,n);
   findsum(a,r,n-1,x,n);
   findsum(a,i,j,x,n);
  }
}
