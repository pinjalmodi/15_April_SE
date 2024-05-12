#include<stdio.h>
int main(){
	char name[10];
	int length=0,i; 
	gets(name);
	puts(name);
	
	for(i=0;name[i]!='\0';i++){	
	length++;
}
	printf("length is %d",length);

}