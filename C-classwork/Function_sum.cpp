//With returntype with argument

#include<stdio.h>
int sumoftwo(int a,int b); //declaration
int main(){
	int ans,x,y;
	ans=sumoftwo(10,20); //call
	printf("\n Answer is %d",ans);
	ans=sumoftwo(100,100);
	printf("\n Answer is %d",ans);
	ans=sumoftwo(200,20);
	printf("\n Answer is %d",ans);
	printf("\n enter x and y");
	scanf("%d %d",&x,&y);
	ans=sumoftwo(x,y);
	printf("\n Answer is %d",ans);
}

int sumoftwo(int a,int b){ //defination
	int c;
	c=a+b;
	return c;
}

