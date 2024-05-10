#include<stdio.h>
int main(){
	
	int a[10],i,n;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter x values:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		a[i]=a[i]+n;
}
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
}