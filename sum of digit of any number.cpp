#include<stdio.h>
int main ()
{
	int num,rem,sum=0;
	printf("enter the value of num");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	printf("%d",sum);
}
