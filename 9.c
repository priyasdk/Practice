//rotation of a array
#include<stdio.h>
int rotate(int a[],int n)
{
  int f,i;
  printf("Enter by how much the array sould rotate:\n");
  scanf("%d",&f);
  if(f>n)
  printf("Invalid\n");
  else
  {
   for(i=0;i<f;i++)
   {
     a[i+n]=a[i];
   }
   for(i=0;i<n;i++)
   {
     a[i]=a[i+f];
   }
   printf("The new rotated array :\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
   printf("\n");
  }
}
main()
{
  int i,n,a[20];
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  rotate(a,n);
}
