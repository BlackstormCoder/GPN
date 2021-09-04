#include<stdio.h>
#include<conio.h>

int main(){

	union example{
		int age;
		float weight;
		char a[20];	
	};
	
	printf("Size of the union : %d",sizeof(example));
	
}

