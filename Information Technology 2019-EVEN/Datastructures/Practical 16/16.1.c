#include<stdio.h>
#include<stdlib.h>
#define clr system("cls");
struct Node
{
	int data;
	struct Node *next;
};
int count=0;
void insertAtEnd(struct Node **start_ref, int data);
void printList(struct Node *start);
void Reverse(struct Node *start);

int main(){
		
	struct Node *start = NULL;
	int val;
	printf("Enter data to insert to linked list.(Inserting at start)\n Enter -1 to stop inserting\n");
	do{
		printf("Data : ");
		scanf("%d",&val);
		if(val != -1)
		insertAtEnd(&start, val);
	}while(val != -1);

	clr;
	printf("\n Linked list Inputted : ");
	printList(start);
	
	printf("\n\n Reverssed linked List \n");
	Reverse(start);

	printf("\nNumber of nodes : %d",count);
	getchar();
	return 0;
}

void insertAtEnd(struct Node **start_ref, int data)
{
	struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
	ptr1->data = data;
	ptr1->next = *start_ref;
	*start_ref = ptr1;
}

void printList(struct Node *start)
{
	struct Node *temp = start;
	printf("\n");
	while (temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}


void Reverse(struct Node *start)
{
	count++;	
	if(start->next != NULL){
		Reverse(start->next);
	}
		printf("%d ",start->data);
		return;
	return;
}

