#include<stdio.h>
#include<string.h>
char frase[30];
char *ptr;
int conta_vogais(char *ptr){
	int quantidade=0;
	ptr=frase;
	while(*ptr!=0){
		if(	strchr("AaEeIiOoUu", *ptr)){
		quantidade++;
	}
		*ptr++;
	}
	return quantidade;
}

int main(){
	int sla;
	scanf("%s",&frase);
sla=	conta_vogais (ptr);
	printf("%d vogais",sla);
	
	return 0;
}