//Finding no.of zeroes
#include<stdio.h>
// this is just a neww comment for new commit

int bs(int a[],int l,int h)
{
  int mid;

   mid=(l+h)/2;
   if(mid!=0)
   {
   if(a[mid]==0&&a[mid-1]!=1)
   bs(a,l,mid);
   else if(a[mid]==1&&a[mid+1]!=0)
   bs(a,mid,h);
   else if(a[mid]==0&&a[mid-1]==1)
   return mid;
   else if(a[mid]==1&&a[mid+1]==0)
   return mid+1;
   }
   else
   return mid;
  //printf("No.of zeroes= %d\n",n-(mid+1));
  //else if(a[mid]==1)
  //bs(a,k,l,mid)
}
main()
{
  int a[20],n,low,high,i,p;
  printf("Enter the no.of elements in array\n");
  scanf("%d",&n);
  printf("Enter the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  if(n==1&&a[0]==1)
  printf(" 0 zeroes\n");
  if(n==1&&a[0]==0)
  printf("1 Zero\n");       //its failing for n=2 where all elements are 0,cuz when it comes to a[0],condition is not written
  else
  {
  low=0;
  high=n;
  p=bs(a,low,high);
  printf("No.of zeroes=%d\n",n-p);
  }
}
