#include<stdio.h>

int swap(int *x,int *y);
int a,b;
int main(){
	printf("Enter the two numbers : ");
	scanf("%d %d",&a,&b);
	printf("Values you entered : \n a : %d\n b : %d\n",a,b);
	swap(&a,&b);
	printf("swapped values : \n  a = %d\n  b = %d",a,b);
}
int swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
 
