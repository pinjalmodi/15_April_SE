#include<stdio.h>
int sum(int a[3][3],int b[3][3],int c[3][3]);
int sub(int a[3][3],int b[3][3],int c[3][3]);
int mul(int a[3][3],int b[3][3],int c[3][3]);

int main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter value for a\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		scanf("%d",&a[i][j]) ;
	
	}
}
printf("Mattrix is\n");
for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		printf("\t%d",a[i][j]) ;
	
	}
	printf("\n");
}
	printf("Enter value for b");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	
		scanf("%d",&b[i][j]);
}
	}
	printf("Mattrix is\n");
for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		printf("\t%d",b[i][j]) ;
	
	}
	printf("\n");
}
c[i][j]=sum(a,b,c);
printf("Sum is\n ");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("\t%d",c[i][j]);
	}
printf("\n");	
}
	
	
	c[i][j]=sub(a,b,c);
printf("Sub is\n ");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("\t%d",c[i][j]);
	}
printf("\n");	
}


c[i][j]=mul(a,b,c);
printf("Mul is\n ");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("\t%d",c[i][j]);
	}
printf("\n");	
}


	}
int sum(int a[3][3],int b[3][3], int c[3][3]){
	int i,j;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];

}
}
return c[i][j];
}

int sub(int a[3][3],int b[3][3], int c[3][3]){
	int i,j;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]-b[i][j];

}
}
return c[i][j];
}

int mul(int a[3][3],int b[3][3], int c[3][3]){
	int i,j;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]*b[i][j];

}
}
return c[i][j];
}