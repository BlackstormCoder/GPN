#include <stdio.h>
#include <stdlib.h>
int add(int,int);  
int main()
{
    int x,y,result;  
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
     result=add(x,y);
    printf("Sum of two numbers are: %d\n",result);
    
    return 0;
}
int add(int x, int y)   
{
    if(y==0)
        return x;
    else
        return(1+add(x,y-1));
}
