#include<stdio.h>
#include<conio.h>

float power(int x, int n)
{
	if(n==0)
		return 1;
	else
	  return power(x, n-1)*x;
}

float fact(int n){
	if(n==0 || n==1)
		return 1;
	else
		return fact(n-1)*n;	
}

float tailor(int x, int n){
	if(n==0)
	 	return 1;
	else
		return tailor(x, n-1) + power(x, n)/fact(n);
	
}


int main()
{
	int x, n;
	printf("Enter the value of x and n where greater the value of n will give you efficient output : ");
	scanf(" %d %d", &x, &n);
	
	printf("Requird value of series is %f", tailor(x, n));
	return 0;
}
