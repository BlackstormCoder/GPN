#include<stdio.h>

int main(){

int arr[] = {5,7,9,13,32,33,42,54,56,59,65,78,132,169};
int n = sizeof(arr)/sizeof(int);
int key = 1;
int count = 0;

int start = 0;
int end = n-1;
int mid = (start + end) / 2;
count++;
do{
//	printf("\nstart = %d\nmid = %d\nend = %d\n",start,mid,end);
//	if(arr[mid] == key){
//	count++;
//  }
	if(arr[mid]>key){
		end = mid-1;
		start = start;
		mid = (start + end)/2 ;
		count++;
	}
	else if(arr[mid]<key){
		start = mid+1;
		end = end;
		mid = (start + end)/2 ;
		count++;
	}
	
	if(arr[mid] == key){
		
		printf("key element %d found at index %d\nNo. of steps : %d",arr[mid],mid,count++);	
		break;
	}
	
	if(mid == end || mid == start && arr[start] != key){
		printf("Element %d not found ",key);
		break;
	}
	
}
while(arr[mid] != key);	
//printf("\nstart = %d\nmid = %d\nend = %d\n",start,mid,end);
return 0;
}

/*

algorithm : 

	1. Begin
	2. set arr[] <-- {10,20,30,40,50};
   	3. set l = 0, h = n-1, f(FOUND) = 0
	4. input search
	5. re
	6. set mid = (l+h)/2
	7. if(arr[mid]==item) set f == 1; break;
	8. if(a[mid] < item) l == mid +1  ELSE set h = mid -1
	9. if f = 1 then, print item found with location = mid, ELSE print item is not found.
*/