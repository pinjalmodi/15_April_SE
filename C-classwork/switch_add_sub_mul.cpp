#include<stdio.h>
int main(){
	int value1,value2;
	char ope;
	printf("Enter value1\n");
	scanf("%d",&value1);
	printf("Enter value2\n");
	scanf("%d",&value2);
	printf("Enter operator character\t");
	scanf(" %c",&ope);
	switch(ope){
	case 'a':
		printf("%d+%d=%d",value1,value2,(value1+value2));
	break;
	case 's':
		printf("%d-%d=%d",value1,value2,(value1-value2));
		break;
	case 'm':
		printf("%d*%d=%d",value1,value2,(value1*value2));
		break;
	case 'd':
		printf("%d/%d=%d",value1,value2,(value1/value2));
		break;
	case 'x':
		printf("%d % %d=%d",value1,value2,(value1%value2));
		break;		
	default:
		printf("Bye bye");
		break;
}
}