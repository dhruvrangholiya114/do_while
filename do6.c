#include<stdio.h>

main()
{
	int a=1,n;
	printf("Enter value: ");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
		printf("%d\n",n);
	    }
		n--;
		
	}while(n>=a);
	
}
