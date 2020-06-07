# include "calculadora.h"
#include<stdio.h>

int main(){
	int x = 10;
	int y = 2;
		
	int som = soma(x,y);
	printf("%d\n",som);
	int subt = sub(x,y);
	printf("%d\n",subt);
	int multi = mult(x,y);
	printf("%d\n",multi);
	int divi = div(x,y);
	printf("%d\n",divi);

return 0;
}