#include<stdio.h>
#include<conio.h>

float tailor(int x, int n){
	static float p=1, f=1;
	float r;
	if(n==0)
	 	return 1;
	else
		r=tailor(x, n-1);
		p=p*x;
		f=f*n;
		return r + p/f;	
}


int main()
{
	int x, n;
	printf("Enter the value of x and n where greater the value of n will give you efficient output : ");
	scanf(" %d %d", &x, &n);
	
	printf("Requird value of series is %f", tailor(x, n));
	return 0;
}
