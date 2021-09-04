#include<stdio.h>
#include<conio.h>

int main(){

int i,temp;
int arr[10];

	printf("Enter Marks of sudents :  \n");
	for(i=0;i<10;i++){
		printf("Enter marks of roll no. %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
int min=arr[0],max=arr[0];
	
	for(i=0;i<10;i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}	
	
	printf("The least marks obtained by a student are : %d\n",min);
	printf("The most  marks obtained by a student are : %d",max);

}

