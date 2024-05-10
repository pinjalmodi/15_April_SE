#include<stdio.h>
int main(){
	int A[3][3],i,j;
	printf("\nEnter array elements");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n Your matrix is...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",A[i][j]);
		}
	printf("\n");
	}
}