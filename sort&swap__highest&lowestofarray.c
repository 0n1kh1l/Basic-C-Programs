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
    for (i = 0; i <n-1; ++i)
    {
            for (j = 0; j < (n- i-1); ++j )
         {
          if (a[j] > a[j+1])
            {   temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
         }
    }printf("\n");
     for (i = 0; i < n; ++i)
    {
    	printf("%d \t",a[i]);
    } printf("\n");
    int k;
    k=a[0];
    a[0]=a[4];
    a[4]=k;
    for (i = 0; i < n; ++i)
    {
    	printf("%d \t",a[i]);
    }

	return 0;
}