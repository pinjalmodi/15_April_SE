#include<stdio.h>
int main(){
	int height,width,length,area,x,y,z;
	printf("Enter height\n");
	scanf("%d",&height);
	printf("Enter width\n");
	scanf("%d",&width);
	printf("Enter length\n");
	scanf("%d",&length);
	/*x=width*length;
	y=height*length;
	z=height*width;
	area=2*(x+y+z);*/
	area= 2*(width*length + height*length + height*width);
	printf("Area of rectangular prism is %d",area);
}