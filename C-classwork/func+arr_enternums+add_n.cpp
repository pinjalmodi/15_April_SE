#include<stdio.h>
void addn (int x[],int n);
int main(){
	int x[10],i,n,z;
	printf("\n Enter 10 numbers");
	for(i=0;i<=9;i++){
		scanf("%d",&x[i]);
	}
	printf("Enter n");
	scanf("%d",&n);
	addn(x,n);


}

void addn(int x[],int n){
	int i;
	for(i=0;i<=9;i++){
	x[i]=x[i]+n;
		printf(" %d ",x[i]);
}

}
