#include<stdio.h>
void findmax(int A[]);

int main(){
	int A[]={101,5,89};
	findmax(A);
	
}

void findmax(int A[]){
int i;
int	length=sizeof(A[i]);
int max=A[0];
for(i=0;i<length;i++){

if(A[i]>max){
	max=A[i];
}

}
	printf("Max num is %d",max);

}
