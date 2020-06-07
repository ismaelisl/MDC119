#include <stdio.h>

int main() {

FILE *arq;

arq = fopen("arquivo.txt","a+");

if(arq == NULL){
    printf("Erro ao abrir o arquivo");
}


fclose(arq);
printf("Pressione um tecla para finalizar...");
getchar();


return 0;
}