#include<stdio.h>
#include<string.h>

int main(){

	printf("This is a use of strcat : \n\n");

char name[20],surname[20];

	printf("Enter your first name : ");
	scanf("%s",name);
	printf("Enter your surname : ");
	scanf("%s",surname);
	
	
	printf("The joined string will be : %s",strcat(name,surname));
	

}

