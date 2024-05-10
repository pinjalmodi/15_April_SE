#include<stdio.h>
int withdraw(int sum,int w);
int deposite(int sum,int d);
int balancecheck(int sum);
int main(){
	int sum,w,d,x;
	char p;
	printf("\n 1.Withdraw");
	printf("\n 2.Deposit");
	printf("\n 3.Chaeck balance");
	

	do{
		printf("\nEnter Number to perform operation\n");
		scanf("%d",&x);
		switch(x){
			case 1:
				printf("\nEnter Amount to withdraw\n");
				scanf("%d",&w);
				sum=withdraw(sum,w);
				printf("Balance is %d\n",sum);
				break;
			case 2:
				printf("\nEnter Amount to deposit\n");
				scanf("%d",&d);
				sum=deposite(sum,d);
				printf("Balance is %d\n",sum);
				break;
			case 3:
				printf("Balance is %d\n",balancecheck(sum));
				break;
			Default:
				printf("\nWrong Entry");
				break;		
		}
		printf("\nDo you want to continue ? y/n");
		scanf(" %c",&p);
		
	}
	while(p=='y');
	printf("Bye bye");

}
int withdraw(int sum,int w){
	return sum=sum-w;
}
int deposite(int sum,int d){
	return sum=sum+d;
}
int balancecheck(int sum){
	return sum;
}
