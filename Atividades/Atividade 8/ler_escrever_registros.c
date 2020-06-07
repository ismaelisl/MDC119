#include<stdio.h>
#include<string.h>

int main(){
FILE *arq;
int i=0;
struct {
char matricula[10];
char nome[30];

} aluno;
memset(&aluno, 0, sizeof(aluno));


arq=fopen("alunos.dat","w+b");
if (arq == NULL) {
        printf("ERRO\n");
    }


printf("matricula ");
scanf("%s", aluno.matricula);

while(strcmp("0",aluno.matricula)){

printf("nome ");
scanf("%s", aluno.nome);

fwrite(&aluno, sizeof(aluno), 1, arq);
i++;

printf("matricula ");
scanf("%s", aluno.matricula);

}

fclose(arq);

arq = fopen("alunos.dat", "rb"); 
fseek(arq, 0 , SEEK_SET);
memset(&aluno, 0, sizeof(aluno));

while(fread(&aluno, sizeof(aluno), 1, arq)!= 0){
    printf("%s - %s\n", aluno.matricula, aluno.nome);
   
}
fclose(arq);
return 0;
}