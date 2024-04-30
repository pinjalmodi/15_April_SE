#include<stdio.h>
int main(){
	char x;
	printf("Enter value for x");
	scanf("%c",&x);
	if( x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
		printf("vowel");
	}
else{
	printf("Consonant");
}
}
