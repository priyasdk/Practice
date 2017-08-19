//replacing 0 with 5 in an integer
#include<stdio.h>
main()
{
  int num,temp,i=0,a[20],j,temp3=1,sum=0,temp1;
  printf("Enter the integer:\n");
  scanf("%d",&num);
  temp1=num;
  while(temp1!=0)
  {
    temp=temp1%10;
    temp1=temp1/10;
    if(temp==0)
    {
      temp=5;
      a[i]=temp;
      i++;
    }
    else
    {
     a[i]=temp;
     i++;
    }
  }
  printf("The new integer is:\n");
  for(j=0;j<i;j++)
  {
    sum=sum+(a[j]*temp3);
    printf("%d\t",sum);
    temp3=temp3*10;
  }
  printf("\n");
  printf("%d\n",sum);
}
