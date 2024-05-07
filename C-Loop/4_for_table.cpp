#include<stdio.h>
int main(){
	int x,y,i;
	printf("Enter table you wish to print\n");
	scanf("%d",&x);
	printf("Enter till you wish to print table\n");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		printf("%d * %d = %d\n", x,i,x*i);
	}
	
}