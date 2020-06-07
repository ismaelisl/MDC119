#include <stdio.h>

int main() {

FILE *arq;

arq = fopen("arquivo.bin","w+b");

if(arq == NULL){
    printf("Erro ao abrir o arquivo");
}


printf("Pressione uma tecla para finalizar...");
getchar();

if(feof(arq)==0){
    printf("FIM DO ARQUIVO\n");
    return 1;
    
}

fclose(arq);

return 0;
}