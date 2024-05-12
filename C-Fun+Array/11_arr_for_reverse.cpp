#include<stdio.h>
int main(){
	int x[5],i;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&x[i]);
	}
	for(i=4;i>=0;i--){
		printf("%d\n",x[i]);
	}
}
/*	z[i]=x[i];
	for(i=0;i<5;i++){
	rem[i]=x[i]%10;
	p[i]=(p[i]*10)+rem[i];
	x[i]=x[i]/10;
}
	for(i=0;i<5;i++){
	printf("%d\n",p[i]);
}
}

/*	p[j]=p[j]*10+rem;
	x[i]=x[i]/10;
}
}
for(i=0;i<5;i++){
printf("%d\n",p[j]);

}*/
//	printf("Reverse Number is");
//	for(i=0;i<5;i++){
//		printf("%d",p[i]);
//	}
