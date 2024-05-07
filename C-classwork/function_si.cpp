#include<stdio.h>
float si(int p,float r,float n);
int main(){
int p;
float r,n,ans;	
printf("Enter value for principal");
scanf("%d",&p);
printf("Enter value for rate");
scanf("%f",&r);
printf("Enter value for n");
scanf("%f",&n);
ans = si(p,r,n);
printf("%.2f is the simple interest",ans);
}


float si(int p,float r,float n){
	float ans;
	ans=(p*r*n)/100;
	return ans;
}