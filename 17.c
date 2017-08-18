//Bubble sort

int bubblesort(int a[],int size)
{
  int temp,i,j;
  for(i=0;i<size;i++)
  {
    for(j=0;j<size-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
main()
{
  int a[20],n,i;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  bubblesort(a,n);
  printf("The sorted is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }

}
