#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the value of a, b");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("%d",a);
	}
	else{
		printf("%d",b);
	}
	
	return 0;
}
