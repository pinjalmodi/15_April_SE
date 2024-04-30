#include<stdio.h>
int main()
{
	char color;
	printf("\n Enter color");
	scanf(" %c",&color);
	if(color=='v' || color== 'i' || color=='b' || color== 'g' || color== 'y' || color== 'o' || color== 'r'){
		printf(" %c is a rainbow color", color);
		}
	else{
		printf(" %c is not a rainbow color", color);
	}
}
