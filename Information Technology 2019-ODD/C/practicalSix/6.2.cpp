#include<stdio.h>
#include<conio.h>

int main(){
 	int i=75;
 	printf("The Odd numbers between 50 and 75 in reverse are : ");
 	for(i=74;i>50;--i){
 		if(i%2!=0){
 			printf("\n %d",i);
		 }
	 }

}

