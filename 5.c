//multiplying two polynomials
#include<stdio.h>
main()
{
  int p1[20],p2[20],o[20],n,m,i,j,k,temp1;
  printf("Enter the degree of polynomial 1\n");
  scanf("%d",&n);
  printf("Enter the polynomail\n");
  for(i=n;i>=0;i--)
  {
    scanf("%d",&p1[i]);
  }
  printf("Enter the degree of polynomial 1\n");
  scanf("%d",&m);
  printf("Enter the polynomail\n");
  for(i=m;i>=0;i--)
  {
    scanf("%d",&p2[i]);
  }
  printf("The given polynomials are:\n");
  for(i=n;i>=0;i--)
  {
    printf("%dx^%d\t",p1[i],i);
  }
  printf("\n");
  for(i=m;i>=0;i--)
  {
    printf("%dx^%d\t",p2[i],i);
  }
  printf("\n");
  for(i=n+m;i>=0;i--)
  {
    o[i]=0;
  }
  for(j=n;j>=0;j--)
  {
    for(k=m;k>=0;k--)
    {
      temp1=p1[j]*p2[k];
      //temp2=n+m;
      if(o[j+k]!=0)
      o[j+k]=o[j+k]+temp1;
      else
      o[j+k]=temp1;
    }
  }
  printf("The product polynomial is:\n");
  for(i=n+m;i>=0;i--)
  {
    printf("%dx^%d\t",o[i],i);
  }
  printf("\n");

}
