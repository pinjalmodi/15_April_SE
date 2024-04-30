#include<stdio.h>
int main(){
	int a,b,c,d,e,fact=1,i,p,q,r,s,t,fact1=1,fact2=1,fact3=1,fact4=1;
	printf("Enter 5 numbers");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	p = a;
	q = b;
	r = c;
	s = d;
	t = e;
	while(p,q,r,s,t>=1)
	{
		fact=fact*p;
		fact1=fact1*q;
		fact2=fact2*r;
		fact3=fact3*s;
		fact4=fact4*t;		
		p--;
		q--;
		r--;
		s--;
		t--;
		printf("%d\n %d\n %d\n %d\n %d\n",fact,fact1,fact2,fact3,fact4);
	}
}