#include"vetores.h"
#include<stdio.h>

int main(){
    
    int *p;

int y=0;
int x[10]={9,5,8,3,2,6,1,7,4};
p=x;
    int tam = tamanho (p);
    printf("Tamanho: %d\n\n",tam);

inverter(p);

ordenar(p);

imprimir(p);

return 0;
}