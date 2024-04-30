#include<stdio.h>
int main(){
	int bs,moa,n,leaves;
	float da,ma,pf,total_mon,gross_mon,final_sal,annual,one_d_sal,worked_d_sal;
	printf("Enter basic monthly salary\n");
	scanf("%d",&bs);
	printf("Enter days of the month\n");
	scanf("%d",&n);
	printf("Enter leaves taken\n");
	scanf("%d",&leaves);
	da=(bs*15)/100; //dearness allowance
	printf("DA is %f\n",da);
	ma=bs*5/100; //medical allowance
	printf("Medical Allowance is %f\n",ma);
	pf=bs*12/100; //providend fund
	printf("PF is %f\n",pf);
	moa=800; // mobile allowance
	gross_mon=(bs+da+ma+moa)-pf;
	printf("Gross Monthly is %f\n",gross_mon);
	one_d_sal=gross_mon/n;
	worked_d_sal=one_d_sal*(n-leaves);
	printf("Monthly salary after leaves is %f\n",worked_d_sal);
	annual=(gross_mon)*12;
	printf("Your annual salary is %f\n",annual);
}