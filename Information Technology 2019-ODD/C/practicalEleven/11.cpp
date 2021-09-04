#include<stdio.h>
#include<conio.h>

int main(){


char name[20],surname[20],occupation[20];


	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Enter your surname : ");
	scanf("%s",&surname);
	printf("Enter your Occupation (Enter student if you are a student) : ");
	scanf("%s",&occupation);
	
	
	
	printf("Name : %s %s\n",name,surname);
	printf("Occupation : %s",occupation);
	
}

