//searching element in a rotated array
#include<stdio.h>
/*int search(int a[],int key,int pivot,int size)
{
  bs(a,key,0,pivot-1);
  bs(a,key,pivot,size);
}*/
int bs(int a[],int k,int l,int h)
{
  int mid;
  if(l<h)
  {
   mid=(l+h)/2;
   if(a[mid]==k)
   {
   printf("Key found in position %d",mid+1);
   return mid+1;
   }
   if(k<a[mid])
   return bs(a,k,l,mid);
   //else //if(k>a[mid])
   return bs(a,k,mid,h);
}
else
return -1;
}
int reverse(int a[],int start,int end)
{
  int i,temp;
  printf("Test");
  for(i=start;i<start+((end-start)/2);i++)
  {
    temp=a[i];
    a[i]=a[end-i-1+start];
    a[end-1-i+start]=temp;

  }
}
main()
{
  int a[20],p,k,i,n,t,q;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the key to be found\n");
  scanf("%d",&k);
  printf("Enter the position of pivot about which numbers has to be rotated:\n");
  //printf("HEllo");
  scanf("%d",&p);
  printf("Hi");
  reverse(a,0,p);
  reverse(a,p,n);
  reverse(a,0,n);
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  t=bs(a,k,0,n-p-1);
  q=bs(a,k,n-p,n);
  if(t==-1&&q==-1)
  printf("key not found:\n");

  //search(a,k,p,n);
}
