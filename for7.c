#include<stdio.h>
main()

{
	int a,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	for(a=1;n>=a;n--)
	{
	   if(n%2==0)
	   {
	   	printf("%d\n",n);
	   }
    }
}
