#include<stdio.h>
#include<conio.h>

int main(){

int i=0,n;
float sum = 0;
	printf("Enter Number of numbers you want to add : ");
	scanf("%d",&n);

float no;

	while(i<n){
		printf("enter the element no. %d : ",i+1);
		scanf("%f",&no);
		sum += no;
		i++;	
}
printf("Sum of the entered numbers = %.2f",sum);	
}

