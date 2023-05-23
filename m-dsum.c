#include<stdio.h>

main()

{
	int n,sum=0,fg,lg;
	printf("Enter any Number=");
	scanf("%d",&n);
	
	lg=n%10;
	
	while(n>=10)
	{
	
	n=n/10;
    }

fg=n;
sum=fg+lg;
printf("Sum of first and last digit =%d",sum);
}
