#include<stdio.h>

main()

{
	int n,count=0;
	printf("Enter any Number=");
	scanf("%d",&n);
    while(n>0)
    {
    	n=n/10;
        count++;
	}
    printf("count of digit =%d",count);
}
