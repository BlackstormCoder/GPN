#include<stdio.h>
#include<conio.h>

int main(){

	struct ex{
		char name[20];
		int marks[3];
	}a;

	int i;
	
	printf("Enter Your name : ");
	scanf("%s",&a.name);
	for(i=0;i<3;i++){
		printf("Enter your marks in subject no. %d : ",i+1);
		scanf("%d",&a.marks[i]);
	}

	printf("\n\n Name : %s \n",a.name);
	for(i=0;i<3;i++){
		printf(" Marks in subject no. %d are %d\n",i+1,a.marks[i]);
	}

}

