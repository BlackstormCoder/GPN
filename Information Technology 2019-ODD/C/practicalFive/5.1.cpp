#include<stdio.h>
#include<conio.h>

int main(){

int i,n1,n2,gcd;

	printf("Enter The two integers : ");
	scanf("%d %d",&n1,&n2);
	
	i=1;
	do{
		if(n1%i==0 && n2%i==0){
			gcd = i;				
		}		
		i++;	
	}
	while(i<=n1 && i<=n2);
 	printf("Greatest common Divisor of %d and %d is %d",n1,n2,gcd);
}


