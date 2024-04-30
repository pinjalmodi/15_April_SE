#include<stdio.h>
int main(){
	int x,y;
	printf("\n Enter x");
	scanf("%d",&x);
	printf("\n Enter y");
	scanf("%d",&y);
if(x>y){
	printf("%d is bigger than %d",x,y);
}
else{
	printf("%d is bigger than %d",y,x);
}
}
