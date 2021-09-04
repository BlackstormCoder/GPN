#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p = (int*) malloc(sizeof(int));
	printf("Enter number of elements of array : ");
	scanf("%d",&*p);
	int *arr = (int*) malloc(*p * sizeof(int));
	printf("Enter %d elements of the array : ",*p);
	int *sum = (int*) malloc(sizeof(int));
	*sum = 0;
	for(int i=0;i<*p;i++){
		scanf("%d",&*arr);
		*sum += *arr;
		arr++;
	}
	printf("sum : %d",*sum);
	
return 0;
}
