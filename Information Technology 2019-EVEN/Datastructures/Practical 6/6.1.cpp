#include<stdio.h>

int n;

void merge(int A[],int mid,int low,int high){
	int i=low;
	int k = low;
	int j = mid+1;
	int B[n];
	while(i<=mid && j<=high){
		if(A[i] < A[j]){
			B[k] = A[i];
			k++;
			i++;
		}else{
			B[k] = A[j];
			k++;
			j++;
		}	
	}
	
	while(i<=mid){
		B[k] = A[i];
		k++;
		i++;
	}
	
	while(j<=high){
		B[k] = A[j];
		k++;
		j++;
	}
	
	for(int i=low;i<=high;i++){
		A[i] = B[i];
	}
	
}

void mergeSort(int A[],int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,mid,low,high);
	}
}

void display(int A[]){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}


int main(){
	printf("        Merge Sort            \n\n");
	printf("Enter size of Array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the element no. %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	mergeSort(arr,0,n-1);
	
	printf("\nSorted Array : \n");
	display(arr);

return 0;
}
