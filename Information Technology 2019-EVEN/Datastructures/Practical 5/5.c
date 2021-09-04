#include<stdio.h>

int main(){

printf("\t INSERTION SORT\n\n");

//int arr[] = {5,7,45,6,28,34,75,12,63,8};
//int n = sizeof(arr)/sizeof(n);

int n;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n;i++){
		printf("Enter the element no. %d : ",i+1);
		scanf("%d",&arr[i]);
	}

printf("Unsorted Array : ");
for(int i=0;i<n;i++){
	printf("%2d ",arr[i]);
}

for(int i=1;i<n;i++){
	int j = i-1;
	int key = arr[i];
		while(j>=0 && key<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	
}

printf("\n\nSorted Array :   ");
for(int i=0;i<n;i++){
	printf("%2d ",arr[i]);
}
return 0;
}
