#include<stdio.h>
#include<conio.h>

int main(){

int n,i=0,sum=0;
float avg;
	printf("enter the total number of values : ");
	scanf("%d",&n);
	
int arr[n];
	do{
	  printf(" Enter Element no. %d : ",i+1);
	  scanf("%d",&arr[i]);
	  	sum += arr[i];	
	  	i++;
	}
	while(i<n);
	avg =(float) sum/n;
	printf("The average of the value inputted is : %.2f",avg);
}

