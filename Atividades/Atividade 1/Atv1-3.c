#include<stdio.h>
int main(){
	int numero=0;
	int proximo=1;
int	anterior=0;
for(int i=0; i<10;i++){
	printf("%d\n",numero);
	anterior=proximo;
	proximo=proximo+numero;
	numero=anterior;
}
}