#include<stdio.h>
int main(void)
{
    float m1,m2,m3,m4,total,per;
	char grade;
	printf("enter the marks of 4 subjects");
	scanf("%f %f %f %f",&m1,m2,m3,m4);
	total=m1+m2+m3+m4;
	per=total/4;
	if(per>=85)
	     	grade='A';
	else if(grade>=70)
			grade='B';
	else if(grade>=55)
			grade='C';
	else if(grade>=40)
			grade='D';
	else
			grade='E';
	printf("percentage is %f and grade is %c",per,grade);		
			
	return 0;		
							     	
}
