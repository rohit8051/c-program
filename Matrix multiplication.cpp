//Matrix muliplication....
#include<stdio.h>
#include<conio.h>
int main()
{
	int row1, col1, row2, col2, mat1[10][10], mat2[10][10];
		
	printf("Enter the value of row1, col1, row2 and col2");
	scanf("%d %d %d %d", &row1, &col1, &row2, &col2);
	
	if(col1!=row2){
		printf("wrong input....value of col1 must be equal to row2");
		return 0;
	}
	
	for(int i=0; i<row1; i++){
		for(int j=0; j<col1; j++){
			printf("Enter the value of mat1[%d][%d]=", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	for(int i=0; i<row2; i++){
		for(int j=0; j<col2; j++){
			printf("Enter the value of mat2[%d][%d]=", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	printf("Required matrix is.....\n");
	
	for(int i=0; i<row1; i++){
		for(int j=0; j<col2; j++){
			int	sum=0, c1=0, r2=0;
			for(int k=0; k<col1; k++ ){
				sum = sum + mat1[i][c1] * mat2[r2][j];
				c1++;
				r2++;
							
			}
			printf("%d\t", sum);
		}
		printf("\n");
	}
	return 0;
}
