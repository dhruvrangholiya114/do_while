#include<stdio.h>

main()
{
	int a=1,n,fact=1;
	printf("Enter value: ");
	scanf("%d",&n);
	
	do
	{
		fact=fact*a;
		a++;
		
	}while(a<=n);
	
	printf("Factorial of %d is %d",n,fact);
}
