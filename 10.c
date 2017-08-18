//reversal algorithm for array rotation
#include<stdio.h>
int reverse(int a[],int start,int end)
{
  int temp,i,j=0;
  for(i=start;i<start+((end-start)/2);i++)
  {
    temp=0;
    temp=a[i];
    a[i]=a[end-1-j];
    a[end-1-j]=temp;
    j++;
    //printf("valuej=%d\t",j);
    printf("%d\t",a[end-1-j]);
  }
  j=0;
  printf("\n");
}
/*int print(int a[],int size)
{
  int i;
  printf("The reversed array is:\n");
  for(i=0;i<size;i++);
  {
    printf("%d\t",a[i]);
  }
}*/
main()
{
  int a[20],n,f,i;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  printf("Enter the no.of numbers to be rotated:\n");
  scanf("%d",&f);
  reverse(a,0,f);
  reverse(a,f,n);
  reverse(a,0,n);
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  //print(a,n);
}
