#include<stdio.h>
void asce(int a[]);
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
	asce(a);
	desc(a);
}
void asce(int a[],int b[]){
	int i,j,p;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
				
				p=b[i];
				b[i]=b[j];
				b[j]=p;
			}
				}
			}
				for(i=0;i<3;i++){	
	printf("Ascending order %d\n",a[i]);
		}
}
void desc(int a[]){
	int i,j,p;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]<a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
	for(i=0;i<3;i++){	
	printf("Descending order %d\n",a[i]);
	}
}
