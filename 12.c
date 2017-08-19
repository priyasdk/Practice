//finding GCD
#include<stdio.h>
int gcd(int a,int b)
{
  int i;
  if(a>b)
  {
    for(i=(b/2);i>0;i--)
    {
      if(b%i==0&&a%i==0)
      break;
    }
  }
  else
  {
    for(i=(a/2);i>0;i--)
    {
      if(b%i==0&&a%i==0)
      break;
    }
  }
  return i;
}
main()
{
  int a,b,c;
  printf("Enter a and b:\n");
  scanf("%d %d",&a,&b);
  c=gcd(a,b);
  printf("The gcd is=%d\n",c);
}
