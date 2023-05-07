#include<stdio.h>
int main()
{
	int i,n,n1=0,n2=1,sum=0; //sum=n1+n2
	 printf("Enter limit of series  : " );
	 scanf("%d",&n);
	 printf("\n");
	  if (n==1)
	    {
	      printf("%d\n", n1);
	    }
	  else if (n==2)
	         {
	  	        printf("%d,%d",n1,n2);
	         }
	         else 
	         { printf("%d,%d,",n1,n2);
	         	for (i = 0; i <(n-2); ++i)
	         	{
	         		sum=n1+n2;
	         		n1=n2;
	         		n2=sum;
	         		printf("%d,",n2);
	         	}

	         }   

	return 0;
}