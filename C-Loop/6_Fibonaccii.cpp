#include<stdio.h>
int main(){
	int limit,a=0,b=1,c;
	printf("Enter limit");
	scanf("%d",&limit);
	for(c=0;c<=limit;c=(a+b)){
	a=b;
	b=c;
	printf("%d",c);
}
}