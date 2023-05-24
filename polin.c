#include<stdio.h>

main()
{
	int n,r,i,a=0;
	printf("Enter the Number=");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		a=r+(a*10);
		n=n/10;
	}
	if(i==a)
	printf("polindrom number");
	else
	printf("not a polindrom number");
}
