#include<stdio.h>
void pattern(int i,int j);
int main(){
	int i,j;
	pattern(i,j);
}
void pattern(int i,int j){
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
				printf("*");
	}

printf("\n");
}

}