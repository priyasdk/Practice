//Finding a minimum element in sorted and rotated array
  #include<stdio.h>

  int findmin(int a[],int v[],int start, int end)
  {
    int mid;
    printf("in function" );
    mid=(start+end)/2;
    int temp=mid;
    while(mid!=0&&v[mid]!=1)
    {
      printf("Im in loop:\n");
      v[mid]=1;
      v[mid-1]=1;
    if(a[mid]<a[mid-1])
    printf("The minimum element is %d",a[mid]);
    else
    return findmin(a,v,0,mid);

    return findmin(a,v,mid,end);
  }
  }
  main()
  {
    int a[20],v[20],n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      v[i]=0;
    }
    findmin(a,v,0,n);
  }
