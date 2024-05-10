#include<stdio.h>
int withdraw(int sum,int w);
int deposite(int sum,int d);
int balancecheck(int sum);
int main(){
	int sum=0,w,d,x,z,k;
	char p;
	printf("\n 1.Withdraw");
	printf("\n 2.Deposit");
	printf("\n 3.Chaeck balance");
	printf("Enter Number to perform operation");
	scanf("%d",&x);

	do{
		switch(x){
			case 1:
				printf("Enter Amount to withdraw");
				scanf("%d",&w);
				z=withdraw(sum,w);
				printf("Balance is %d",z);
				break;
			case 2:
				printf("Enter Amount to deposit");
				scanf("%d",&d);
				k=deposite(sum,d);
				printf("Balance is %d",k);
				break;
			case 3:
				printf("Balance is %d",balancecheck(sum));
				break;
			Default:
				printf("Wrong Entry");
				
		}
		printf("Do you want to continue ? y/n");
		scanf(" %c",&p);
		
	}
	while(p=='y');
	printf("Bye bye");

}
int withdraw(int sum,int w){
	return sum-w;
}
int deposite(int sum,int d){
	return sum+d;
}
int balancecheck(int sum){
	return sum;
}
