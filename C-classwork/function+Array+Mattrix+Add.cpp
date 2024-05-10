#include<stdio.h>
void sumOfmatrix();
void subOfmatrix();
int main(){
	sumOfmatrix();
	subOfmatrix();
}
void sumOfmatrix(){
	int A[3][3]={{1,1,1},{1,1,1},{1,1,1}},B[3][3],C[3][3],i,j;
	
	printf("\n Enter B elements:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
		}
	}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		C[i][j]=A[i][j]+B[i][j];
			}
}

printf("\n Sum Of matrix is \n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf(" %d ",C[i][j]);
	}
printf("\n");
}
}
void subOfmatrix()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		C[i][j]=A[i][j]-B[i][j];
			}
}

printf("\n Sub Of matrix is \n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf(" %d ",C[i][j]);
	}
printf("\n");
}

}