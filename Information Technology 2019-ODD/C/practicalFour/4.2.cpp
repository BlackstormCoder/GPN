#include<stdio.h>
#include<conio.h>

int main(){
int a,b,c,d;
	
	printf("Enter the number : ");
	scanf("%d",&a);
 	printf("\nThe number you entered is : %d",a);
	while(a!=0){
		b=b*10 + a%10;
		a=a/10;
	}
printf("\nThe reversed number is : %d",b);	
}

