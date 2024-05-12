#include<stdio.h>
int main(){
	char n[5][100],i;
	printf("Enter 5 names");
	for(i=0;i<5;i++){
		scanf("%s",&n[i]);
	}
	for(i=0;i<5;i++){
		printf("%s",n[i]);
}
}