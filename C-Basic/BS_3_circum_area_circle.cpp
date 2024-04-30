#include<stdio.h>
int main(){
	
	float pie,radius,cir,area;
	pie= 3.14;
	printf("Enter radius\n");
	scanf("%f",&radius);
	area=pie*radius*radius;
	cir=2*pie*radius;
	printf("Area of circle is %.2f",area);
	printf("circumference of circle is %.2f",cir);
}