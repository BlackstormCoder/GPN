#include<stdio.h>
#include<conio.h>

int main(){

int a,b,c;
	
	printf("Enter Element no. 1 : ");
	scanf("%d",&a);
	printf("Enter Element no. 2 : ");
	scanf("%d",&b);
	printf("Enter Element no. 3 : ");
	scanf("%d",&c);
	
	if(a>b && a>c){
			printf("%d is the largest number of the three.",a);
	}
	else if(b>a && b>c){
				printf("%d is the largest number of the three.",b);
	}
	else if(c>a && c>b){
		printf("%d is the largest number of the three.",c);
	}
	
}

