#include<stdio.h>
#include<math.h>
int main(){
	int n,y,z,p,q,r,s;
	printf("Enter value");
	scanf("%d",&n);
	y=2;
	z=pow(n,y);
	p=1;
	q=pow(n,p);
	r=3;
	s=pow(n,r);
	printf("%d\n",q);
	printf("%d\n",z);
	printf("%d\n",s);
}