#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct stack{
	int size=100;
	int top = -1;
	char *arr;
};

int priority(char x){
	if(x == '(')
	return 0;
	else if(x== '+' || x=='-')
	return 1;
	else if(x == '*' || x == '/')
	return 2;
return -1;	
}

void push(struct stack *s,char x){
	s->arr[++s->top] = x;
}

char pop(struct stack *s){
	if(s->top == -1)
	return -1;
	else
	return s->arr[s->top--];
}
int main(){
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->arr = (char*) malloc (s->size*sizeof(char));
	
	char c[100];
	char *e,x;
	printf("Enter the expression : ");
	scanf("%s",c);
	e = c;
	printf("Postfix Expression : ");
	
	while(*e != '\0'){
		if(isalnum(*e)){
			printf("%c",*e);
		}else if(*e == '('){
			push(s,*e);
		}else if(*e == ')'){
			while((x = pop(s)) != '('){
				printf("%c",x);
			}
		}else{
			while(priority(s->arr[s->top]) >= priority(*e)){
				printf("%c",pop(s));
			}
			push(s,*e);
		}
		e++;
	}
	while(s->top!=-1){
		printf("%c",pop(s));
	}
return 0;
}
