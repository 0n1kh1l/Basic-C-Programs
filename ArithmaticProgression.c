
#include<stdio.h>
int main()
{
	int n,i,d,sum=0,k=0;
	printf("Enter array limit : ");
	scanf("%d",&n);
	printf("\n");
	int a[n];
	for (i = 0; i < n; ++i)
	{
		printf(" \n Enter num %d =",i+1 );
		scanf("%d",&a[i]);
	}
	d=a[1]-a[0] ;
	for (i = 2; i < n; ++i)
	{
		if ((a[i]-a[i-1])==d)
		{
			k=k+1;
		}
		else 
		{continue;}
	}
	
	if (k==(n-2))
	{
		for (i = 0; i < n; ++i)
		{
			sum=sum+a[i];
		}
		printf("\n Given array is Arithmatic Progression(common difference =%d) \n Sum of elemnts of AP is %d \n",d,sum );
	}
	else printf(" Given array is not an Arithmatic Progression\n");
	return 0;
}
