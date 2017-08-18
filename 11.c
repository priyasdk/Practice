// cyclically rotate array by one
#include<stdio.h>
int crotate(int a[],int size)
{
  int temp,i;
  temp=a[size-1];
  for(i=size-1;i>=1;i--)
  {
    a[i]=a[i-1];
  }
  a[0]=temp;
  //printf("test");
  return 0;
}
main()
{
  int a[20],n,i,ch;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the data:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  do {
  printf("Enter your choice:\n");
  printf("1.Rotate\n2.display\n3.exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:{
      crotate(a,n);
    }
    break;

    case 2:{
      for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
      }
      printf("\n");
      break;
    }
  }
}
  while(ch==1||ch==2);
}
