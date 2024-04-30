#include<stdio.h>
int main(){
	int salary;
	float ip,li,Remaining_sal;
	printf("Enter your salary");
	scanf("%d",&salary);
	ip=(salary*10)/100;
	li=(salary*10)/100;
	Remaining_sal=salary-ip-li;
	printf("Remaining Salary is %f",Remaining_sal);
	
}