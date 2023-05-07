#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,k;
	printf("Enter limit of array : ");
	scanf("%d",&n);
	int nums[(2*n)];
	printf("\nEnter nums\n");
	for (i = 0; i < n; ++i)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&nums[i]);
	}
	for (i = 0; i < (n); ++i)
	{
	    k=((2*n)-1)-i;
		nums[k]=nums[i];  
	}
	for (i = n; i <= ((2*n)-1); ++i)
	{
		printf("%d \n",nums[i]);
	}

	return 0;
}