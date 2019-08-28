#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		printf("*");
	}
	getch();
	return 0;
}
