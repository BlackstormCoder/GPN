//Develop and execute a program to implement a stack

#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

void push(struct stack *s, int val){
	if(s->top == s->size-1){
		printf("Stack Overflow!\n%d couldn't be pushed to stack.\n",val);
		return;
	}
	s->arr[++s->top] = val;
	printf("%d pushed to stack.\n",s->arr[s->top]);
}

void pop(struct stack *s){
	if(s->top == -1){
		printf("Stack underflow!\nNo elements to be popped.\n");
	}else{
		int temp = s->arr[s->top];
		s->top--;
		printf("%d has been popped\n",temp);
	}
}

void print(struct stack *s){
	if(s->top == -1){
	printf("Stack empty\n");
	return;}
	printf("Stack : \n\n|    |\n");
	for(int i=s->top;i>=0;i--){
		printf("| %2d |\n",s->arr[i]);
	}
	printf("|____|\n\n");
}

int main(){
	struct stack *s = (struct stack*) malloc (sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*) malloc (s->size*sizeof(int));
	
	int choice;
	do{
		int data;
		printf("Press 1. to push element to stack \n");
		printf("Press 2. to pop element from stack\n");
		printf("Press 3. to view stack\n");
		printf("Press 4. to exit\nChoice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
					printf("Enter data to add to stack : ");
					scanf("%d",&data);
					push(s,data);
					break;
			case 2:
					pop(s);
					break;
			case 3: 
					print(s);
					break;
			case 4:
					printf("Exitting Program\n");
					exit(0);				
		}
		printf("\n");
	}while(1);
return 0;
}
