#include<stdio.h>
int main(){
	int x,large=0,rem=0;
	printf("Enter x");
	scanf("%d",&x);
	do{
	
	rem=x%10;
if(rem>large){
	large=rem;
}
x=x/10;
}
while(x>0);
printf("Large digit is %d",large);
}


