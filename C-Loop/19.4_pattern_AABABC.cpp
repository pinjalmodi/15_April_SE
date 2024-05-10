#include<stdio.h>
int main(){
	int i,j;
	char k='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
k=k+j;
			printf(" %c",k-1);
			k='A';
			
		}
			
			printf("\n");
	}

}
