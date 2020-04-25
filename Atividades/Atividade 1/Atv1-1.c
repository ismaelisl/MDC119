#include <stdio.h>

int main(){
    int seg=0;
    int hr=0, min=0;
    printf("Digite o tempo em segundos:");
    scanf("%d",&seg);
   
    hr=seg/3600;
     min=(seg/60)-60*hr;
    seg=seg-(60*min)-3600*hr;
    printf("%d hora(s), %d minuto(s) , %d segundo(s),\n",hr,min,seg);
    return 0;

}