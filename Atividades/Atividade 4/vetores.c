#include "vetores.h"
#include <stdio.h>
#include<stdlib.h>
int tamanho(int *p){
   int  y=0;
while (*p){
p++;
y++;
} return y;
}

void imprimir (int* p){


while (*p){
printf("%d\n", *p);
p++;
}

}

void inverter(int *p){
    int i=0;  

while (*p){
p=p+tamanho(p)-1-i;
i++;
}
}

void ordenar(int *p){
  
int i=0;
int j=0;
int menor;
for(i=0;i<tamanho(p);i++){
    for(j=i;j<tamanho(p);j++){
if(p[i]>p[j]){
    menor=p[j];
    p[j]=p[i];
    p[i]=menor;
}
}
}
}