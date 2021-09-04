#include<stdio.h>
#include<conio.h>

long int fact(int n);
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("Factorial of %d is %d",n,fact(n));
}

	long int fact(int n){
	while(n>=1){
		return n*fact(n-1);
	}
	return 1;	
}

