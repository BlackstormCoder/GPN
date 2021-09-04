#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main(){
	int a,b;
	printf("Enter the two numbers : ");
	scanf("%d %d",&a,&b);
	sum(a,b);
	printf("The sum is : %d",sum(a,b));

}

int sum(int a,int b){
	int c = 0;
	c=a+b;
	return c; 
}

