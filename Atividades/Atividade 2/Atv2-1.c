#include<stdio.h>

union  numeros_inteiro {
	char is;
	short int x;
	int y;
	long int z;
	
}numero;

int main(){
	numero.is='l';
	printf("%c\n",numero.is);
	numero.x=2;
	printf("%d\n",numero.x);
	numero.y=223;
	printf("%d\n",numero.y);
	numero.z=213124;
	printf("%d\n",numero.z);
	
		printf("%c\n",numero.is);
		printf("%d\n",numero.x);
		printf("%d\n",numero.y);
		printf("%d\n",numero.z);
	
	
}