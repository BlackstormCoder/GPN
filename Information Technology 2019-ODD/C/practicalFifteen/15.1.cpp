#include<stdio.h>
#include<conio.h>

int main(){

struct employees{
	char name[20];
	int age;
	int salary;
} e1,e2;

	printf("Enter your name : ");
	scanf("%s",&e1.name);
	printf("Enter your age : ");
	scanf("%d",&e1.age);
	printf("Enter your salary : ");
	scanf("%d",&e1.salary);

	printf("\n----------------------\nEmployee details : \n----------------------\n Name   : %s \n Age    : %d \n Salary : %d \n----------------------",e1.name,e1.age,e1.salary);
	
}

