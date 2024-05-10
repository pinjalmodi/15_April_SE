#include<stdio.h>
int main(){
	int a[10],i;
	printf("Enter 10 values\n");
	for(i=0;i<=9;i++){
		scanf("\n %d",&a[i]);
	}
	for(i=0;i<=9;i++){
		if(a[i]%2==0){
	
	printf("\n %d",a[i]);
	}
		}
	
}