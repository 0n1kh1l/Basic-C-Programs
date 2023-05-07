//program to print factorial of  "n"
#include<stdio.h>
int main()
{
    int i,n,p=1;
    /*here p is declared and equalled to 1,
    bcoz we are going to store products which will be final value of factorial*/
    printf("Program to print First 'n' Natural Nums \n");
    printf("Enter Value of 'n' : ");
    scanf("%d",&n);
    printf("\n");
     for(i=1;i<=n;++i)
     {
        p=p*i;
     }
    printf(" Factorial of %d is %d\n",n,p);
    printf("or \n (%d)! = %d",n,p);
    return 0;
}
//n;kk;e