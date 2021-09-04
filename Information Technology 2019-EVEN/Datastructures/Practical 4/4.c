#include<stdio.h>

int main(){

printf("\t BUBBLE SORT\n\n");

//int arr[] = {456,54,29,3,45,78,35,42,65};
//int n = sizeof(arr)/sizeof(int);

int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n;i++){
		printf("Enter the element no. %d : ",i+1);
		scanf("%d",&arr[i]);
	}

printf("Unsorted Array : \n");
for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
}
printf("\n");

for(int i = 0;i<n;i++){
	for(int j=0;j<n;j++){
		if(arr[j]>arr[i]){
			int temp = arr[i];
			arr[i]   = arr[j];
			arr[j]   = temp;
		}
	}
}

printf("Sorted Array   : \n");
for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
}

return 0;
}
