#include<stdio.h>
int main()
{
    int n;
    printf("Enter length of an array : ");
    scanf("%d",&n);
    int i, j, a[n],temp;
    for (i = 0; i < n; ++i)
    {
        printf("Enter Number %d of %d : ",i+1,n);
        scanf("%d",&a[i]);
    }
    for (i = 0; i <n-1; )
    {
        if (a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          --i;  
        }
          else ++i;
    }printf("\n");
  
   for (i = 0; i < n; ++i)
    {
        printf("%d \t",a[i]);
    }

    return 0;
} 