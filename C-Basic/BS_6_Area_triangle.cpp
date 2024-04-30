#include<stdio.h>
int main(){
	int height,base;
	double area;
	printf("Enter Base\n");
	scanf("%d",&base);
	printf("Enter Height\n");
	scanf("%d",&height);
	area= (base*height)/2;
	printf("Area of Triangle is %.2lf",area);
}