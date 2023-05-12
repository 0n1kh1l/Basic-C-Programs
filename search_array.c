#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("nter length of an array :");
	scanf("%d",&n);
	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Enter num %d of %d : ",i+1,n );
		scanf("%d",&nums[i]);
	}
	int m,k=0;
	printf("Enter num to be searched : ");
	scanf("%d",&m);
	for (int j = 0; j < n; )
	{
		if(nums[j]==m)
		{
			printf("Elemnt found at index of %d \n",j );
			k=k+1;
		}
		else ++j;
	}
	if (k==0)
	{
		printf("Element not found");
	}
	return 0;
}