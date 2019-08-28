#include<stdio.h>
int main()
{
	int a, b,c;
	printf("Enter the value of a, b, c");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		if (a>c){
			printf("A is greatest");
		}
		else
		{
			printf("c is greatst");
		}
	}
	else if(b>c)
	     printf("B is greatest"); 
	else
		printf("C is a greater");
	
	
	return 0;
}
