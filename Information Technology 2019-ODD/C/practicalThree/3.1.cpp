#include<stdio.h>
#include<conio.h>

int main(){
	printf("The codes for Sports are : \n\t H = hockey\n\t C = Cricket\n\t B = Ball \n\t F = Football\n\t T = Tennis");
	printf("\n\nEnter Your Favourite Sport's Code : ");
 char choice = getchar();

	switch(choice){
		case 'H':
			printf("You selected Hockey");
			break;
		case 'C':
			printf("You selected Cricket");
			break;
		case 'B':
			printf("You selected Ball");
			break;
		case 'F':
			printf("You selected Football");
			break;		
		case 'T':
			printf("You selected Tennis");
			break;
		default:
			printf("You didn't choose any of the mentioned sports");
		}
}

