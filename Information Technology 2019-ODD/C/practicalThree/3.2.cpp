#include<stdio.h>
#include<conio.h>

int main(){

int bs,hra; //gs=Gross Salary,bs = Basic Salary,da=dailu allowence,hra = house rent allowance
float gs,da; 

	printf("Enter Your Basic Salary : ");
	scanf("%d",&bs);
	
	if(bs>1500){
		hra = 500;
		da = bs * 0.1 ; 
		gs = bs+da+hra;
	}
	else{
		hra = 300;
		da = bs * 0.05 ; 
		gs = bs+da+hra;
	}
printf("The Gross Salary is : %.2f",gs);	
}

