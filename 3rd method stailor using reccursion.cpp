#include<stdio.h>
#include<conio.h>
int n=4;

float s(float x, float t)
{
	if(t==n)
		return x/t + 1;
	else
		return s(x, t+1)*x/t +1;
	
}

int main()
{
	int x, t=1;
	printf("Enter the valuen of x");
	scanf("%d",&x);
	
	printf("Required value is %f", s(x, t));
	return 0;
}

