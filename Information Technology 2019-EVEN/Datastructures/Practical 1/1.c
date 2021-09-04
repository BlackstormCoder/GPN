#include<stdio.h>

int main(){

int n;
printf("Enter size of array : ");
scanf("%d",&n);

int arr[n];

for(int i=0 ;i<n;i++){
	printf("Enter element no %d : ",i+1);
	scanf("%d",&arr[i]);
}
int data;
printf("Enter data to find : ");
scanf("%d",&data);
//int arr[8] = {15,5,20,35,2,42,67,17};
//int n = sizeof(arr)/sizeof(int);
//int data = 4;

for(int i=0;i<n;i++){
	if(arr[i]==data){
		printf("Data found at index %d",i);
		break;
	}
}		
	

return 0;
}

// Algorithm
/*
Steps : 
	1. BEGIN
	2. set a[5]<-- {10,20,30,40,50}
	3. set i = 0
	4. search item
	5. repeat 6 and 7 while i<n
	6. if a[i] = item, then print item found and it's location, break;
	7. i<--- i++
	8. i>=n then, print item not found
	9. END

*/