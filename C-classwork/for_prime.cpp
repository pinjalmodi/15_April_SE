#include<stdio.h>
int main (){
	int n,x,b=0;
	printf("Enter n");
	scanf("%d",&n);
	for(x=2;x<=n;x++){
		if(n%x == 0){
			b=1;
			break;
			printf("Not aPrime Number");
		}
		
		else if(b==1){
			
			printf("prime");
			
		}
	}
}