#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int *arr;	
};

void enqueue(struct queue *q, int val){
	if(q->r > q->size-1){
		printf("Queue is full!\nCouldn't enqueue  %d\n",val);
		return;
	}else if(q->f == -1 && q->r == -1){
		q->f++;
		q->r++;
		q->arr[q->r] = val;
	}else{
		q->arr[++q->r] = val;
	}
	printf("%d has been added to queue\n",q->arr[q->r]);
}

void dequeue(struct queue *q){
	if(q->f == q->r){
		printf("No elements to dequeue\n");
		return;
	}else{
		printf("%d has been dequeued\n",q->arr[q->f]);
		q->f++;
	}
}

void print(struct queue *q){
	printf("Queue : ");
	for(int i=q->f;i<=q->r;i++){
		printf("%d ",q->arr[i]);
	}
	printf("\n");
}
int main(){
	struct queue *q = (struct queue*) malloc(sizeof(struct queue));
	q->size = 10;
	q->f = -1;
	q->r = -1;
	q->arr = (int*) malloc(q->size * sizeof(int));
	
	do{
		int choice,data;
		printf("1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\nChoice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
					printf("Enter data to enqueue : ");
					scanf("%d",&data);
					enqueue(q,data);
					break;
			case 2:
					dequeue(q);
					break;
			case 3:
					print(q);
					break;
			case 4:
					exit(0);
					break;
		}	
		printf("\n");
	}while(1);
	
return 0;
}
