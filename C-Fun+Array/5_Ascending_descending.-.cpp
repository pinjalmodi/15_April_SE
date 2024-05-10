#include<stdio.h>
void asce(int a[],int b[]);
void desc(int a[],int b[]);
int main(){
	int a[3],b[3],i,x,q;
	printf("Enter values for a");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter values for b");
		for(i=0;i<3;i++){
		scanf("%d",&b[i]);
	}
	
	
	do 
	{
	
	printf("1.Ascending");
	printf("2.Descending");
	
	printf("Enter Num for Ascending or Descending\n");
	scanf("%d",&x);
	
	switch(x){
		case 1:
		asce(a,b);	
		for(i=0;i<3;i++){	
		printf("Ascending order for a %d\n",a[i]);
		}
		for(i=0;i<3;i++){
			printf("Ascending for b %d\n",b[i]);
		}
		break;
		case 2:
			desc(a,b);
		for(i=0;i<3;i++){	
		printf("Descending order for a %d\n",a[i]);
		}
		for(i=0;i<3;i++){	
		printf("Descending order for b %d\n",b[i]);
		}
	
		break;
		default:
			printf("Wrong Entry");
			break;
}
printf("Continue? y/n");
scanf(" %c",&q);
}
while(q=='y');
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
				
}
void desc(int a[],int b[]){
	int i,j,p;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]<a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
				
				p=b[i];
				b[i]=b[j];
				b[j]=p;
			}
		}
	}
	


}
