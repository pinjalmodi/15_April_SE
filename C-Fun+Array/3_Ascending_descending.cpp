#include<stdio.h>
void asce();
void desc(int a[]);
int main(){
	int a[3],b[3],i;
	printf("Enter values for a");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter values for b");
		for(i=0;i<3;i++){
		scanf("%d",&b[i]);
	}
	asce();
}
void asce(int a[]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				a[0]=a[i];
				a[i]=a[j];
				a[j]=a[0];
			}
			for(i=0;i<3;i++){
			
			printf("Ascending order %d",a[i]);
		}
	}
	}
}