#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char x[30]="Eu gosto de C!";

	
	char *ptr;
	
	ptr=x;
	
	while(*ptr!=0){
		printf("%c",*ptr);
		ptr++;
	}
}