#include<stdio.h>
int main(){
	char name[10];
	int i,length=0;
gets(name);

for(i=0;name[i]!='\0';i++){
	length++;
}
for(name[i]='\0',name[i]<=name[0],name[i]++){
printf("%c",name[i]);
}
}