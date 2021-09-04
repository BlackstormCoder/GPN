#include<stdio.h>
#include<conio.h>

int a,b;
int smallest (int ,int );
int main(){
	
	extern int small;
		printf("Enter two numbers : ");
		scanf("%d %d",&a ,&b);
			if(smallest(a,b)==0){
				printf("The numbers are equal");
				}
			else{
				printf("The smallest number is : %d",smallest(a,b));
				}
	}

 smallest (int a,int b){
	if(a==b){
		return(0);	
	}
	else if(a>b){
		return(b);
	}
	else{
		return(a);
	}
}
