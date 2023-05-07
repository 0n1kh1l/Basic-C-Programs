#include <stdio.h>
int main()
{
	int n,sum=0,i,k=0;
	printf("Enter number to be chekced : ");
	scanf("%d",&n);
	for (i = 0; i < 1000; ++i)
	{
		sum=sum+i;
		if(sum==n)
		{
			k=k+1;
			break;
		}
	}
	if (k==1)
	{
		printf("%d is triangular number",n);
	}
	else printf("Not a triangular number \n");
	return 0;
}