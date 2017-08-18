#include<stdio.h>

int bs(int a[],int k,int l,int h)
{
  int mid;
  mid=(l+h)/2;
  if(a[mid]==k)
  printf("Key found in %d position!\n",mid+1);
  else if(k<a[mid])
  bs(a,k,l,mid);
  else if(k>a[mid])
  bs(a,k,mid,h);
}
main()
{
  int key,a[20],n,low,high,i;
  printf("Enter the no.of elements in array\n");
  scanf("%d",&n);
  printf("Enter the sorted array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the key\n");
  scanf("%d",&key);
  low=0;
  high=n;
  bs(a,key,low,high);

}
