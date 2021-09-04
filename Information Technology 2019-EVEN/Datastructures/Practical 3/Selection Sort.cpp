#include<stdio.h>

int main(){

//	int arr[] = {9,3,1,4,2,7,5,11};
//	int n = sizeof(arr)/sizeof(int);
	
	int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n;i++){
		printf("Enter the element no. %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Unsorted Array   :\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(int i=0;i<n;i++){
		int min = arr[i];
		for(int j=i+1;j<n;j++){
			
			if(min>arr[j]){
				int temp   = arr[j];
					arr[j] = min;
					min    = temp;
			}
		}
		arr[i] = min;
	}
	printf("Sorted Array   :\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
return 0;
}
