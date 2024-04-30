#include<stdio.h>
int main()
{
	char choice;
	printf("\n Enter Color character\n");
	scanf(" %c", &choice);
	switch(choice){
		case 'v':
		printf("Violet is a rainbow color");
		break;
		case 'i':
		printf("Indigo is a rainbow color");
		break;
		case 'b':
		printf("Blue is a rainbow color");
		break;
		case 'g':
		printf("Green is a rainbow color");
		break;
		case 'y':
		printf("Yellow is a rainbow color");
		break;
		case'o':
		printf("orange is a rainbow color");
		break;
		case 'r':
		printf("red is a rainbow color");
		break;
		default:
		printf(" %c is not a rainbow color",choice);
	}
	
}