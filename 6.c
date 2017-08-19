//adding 2 polynomials
#include<stdio.h>
main()
{
  int p1[20],p2[20],o[20],n,m,i,j,k,temp1;
  printf("Enter the degree of polynomial 1\n");
  scanf("%d",&n);
  printf("Enter the polynomail\n");
  for(i=0;i<=n;i++)
  {
    scanf("%d",&p1[i]);
  }
  printf("Enter the degree of polynomial 1\n");
  scanf("%d",&m);
  printf("Enter the polynomail\n");
  for(i=0;i<=m;i++)
  {
    scanf("%d",&p2[i]);
  }
  printf("The given polynomials are:\n");
  for(i=0;i<=n;i++)
  {
    printf("%dx^%d\t",p1[i],i);
  }
  printf("\n");
  for(i=0;i<=m;i++)
  {
    printf("%dx^%d\t",p2[i],i);
  }
  printf("\n");
  if(n>m)
  {
    for(i=0;i<=n;i++)
    {
      p1[i]=p1[i]+p2[i];
    }
    printf("The output polynomial:\n");
    for(i=0;i<=n;i++)
    {
      printf("%dx^%d\t",p1[i],i);
    }
    printf("\n");
  }
  else
  {
    for(i=0;i<=m;i++)
    {
      p2[i]=p2[i]+p1[i];
    }
    printf("The output polynomial:\n");
    for(i=0;i<=m;i++)
    {
      printf("%dx^%d\t",p2[i],i);
    }
    printf("\n");
  }
  }
