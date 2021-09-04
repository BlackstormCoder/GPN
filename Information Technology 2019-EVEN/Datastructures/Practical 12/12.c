#include<stdio.h>

void TowerOfHanoi(char a,char b, char c, int d){
	if(d == 1){
	printf("Move disk %d from %c to %c\n",d,a,b);
	return;
	}
	TowerOfHanoi(a,c,b,d-1);
	printf("Move disk %d from %c to %c\n",d,a,b);
	TowerOfHanoi(c,b,a,d-1);
}

int main(){
	int n;
	printf("Enter number of disks : ");
	scanf("%d",&n);
	TowerOfHanoi('a','b','c',n);
return 0;
}
