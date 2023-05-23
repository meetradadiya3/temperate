#include<stdio.h>


main()
{
	int n,fact=1;
	printf("Enter Value N=");
		scanf("%d",&n);
	while(n>=1)
	{
		
		fact=fact*n;
		n--;
	}
	printf("factorial =%d\n",fact);
}
