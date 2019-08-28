#include<stdio.h>
int main()
{
	int x, y, quo, rem;
	printf("enter two number");
	scanf("%d %d", &x,&y);
	if(y!=0)
	{
		quo=x/y;
		rem=x%y;
		printf("%d %d", quo,rem);
	}
	else
	    printf("divide by zero error\n");
	    return 0;
}
