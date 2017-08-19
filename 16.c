//rotate array or string
#include<stdio.h>

int reverse(int a[],int start,int end)
{
  int temp;
  while(start<end)
  {
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
  }
}
main()
{
  int a[20],n,i;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  reverse(a,0,n-1);
  printf("The reverse array is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
