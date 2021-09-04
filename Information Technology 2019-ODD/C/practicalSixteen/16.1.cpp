#include<stdio.h>
#include<conio.h>

int main(){

	struct student { 
		int no;
		int age; 
		int marks;
		
	};
	int i;
	struct student a[3];
	
	for(i=0;i<3;i++){
		printf("Student no. %d\n",i+1);
		printf("Enter roll no. : ");
		scanf("%d",&a[i].no);
		printf("Enter age : ");
		scanf("%d",&a[i].age);
		printf("Enter Marks : ");
		scanf("%d",&a[i].marks);
	}
	
	printf("-----------------------------");
	for(i=0;i<3;i++){
		printf("\n Student no : %d \n Age : %d\n Roll no : %d\n marks : %d \n",i+1,a[i].no,a[i].age,a[i].marks);
	}
	
}

