#include<stdio.h>
#include<conio.h>

int main(){

int i,j;
int arr[3][3],arr1[3][3];

	printf("Enter a matrix : \n");
	printf("Size : 3x3\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element at [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix you entered is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	
		printf("The transpose of matrix is : \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			arr1[j][i] = arr[i][j];	
			
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",arr1[i][j]);
		}
		printf("\n");
	}
	
}

