#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct funcionario_t {
    char nome[50];
    double salario;
    char admissao[10];
};
int main(int argc, char const *argv[]){

    fflush(stdin);

    int i=0, total=0, p=1;
    struct funcionario_t funcionario[50];

    printf("\nNome do funcionario %i:", p);
    scanf("%s", funcionario[i].nome);

    while((strcmp(funcionario[i].nome,"0"))){

        printf("Salario do funcionario %i:", p);
        scanf("%lf", &funcionario[i].salario);

        printf("Admissao do funcionario %i:", p);
        scanf("%s", funcionario[i].admissao);

        i = i + 1;
        p++;
        total++;

        printf("\nNome do funcionario %i:", p);
        scanf("%s", funcionario[i].nome);
    }

    printf("\n\nTotal de funcionarios: %i \n", total);

    for(i=0;i<total;i++){
        printf("Nome do funcionario %i: %s \n", i, funcionario[i].nome);
        printf("Salario do funcionario %i: %lf \n", i, funcionario[i].salario);
        printf("Admissao do funcionario %i: %s \n", i, funcionario[i].admissao);
    };

    return 0;
}