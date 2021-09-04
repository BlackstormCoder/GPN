#include<stdio.h>

#define MAX 3

int main(){
	
	int arr[3] = {10,100,200};
	int i;
	int *ptr[MAX];
	
		for(i=0;i<MAX;i++){
			ptr[i] = &arr[i];
		}
		
		for(i=0;i<MAX;i++){
			printf("Value of arr[%d] is %d \n",i,*ptr[i]);
		}

}

