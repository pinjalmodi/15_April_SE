#include<stdio.h>
int main(){
	int a[5],i,j,p;
printf("Enter 5 numbers\n");
for(i=0;i<5;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
	for(j=i+1;j<5;j++){
		if(a[i]>a[j]){
			p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
	}
}
for(i=0;i<5;i++){
printf("Ascending order is %d\n",a[i]);
}
}