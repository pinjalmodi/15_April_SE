#include<stdio.h>
int main(){
	int A[]={5,8,89},i;
	int length=sizeof(A)/sizeof(A[0]);
	int max=A[0];
	for(i=0;i<length;i++){
	if(A[i]>max)
	max=A[i];	
	}
	printf("Largest Element is %d",max);
	
	
}