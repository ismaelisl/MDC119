#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	


struct s_aluno{
	int matricula;
	char nome[30];
	float media;
}; 

int main(){
	struct s_aluno aluno, *ptr;

	aluno.matricula=2;
strcpy(aluno.nome, "Ismael");;
	aluno.media=2.22;
	ptr=&aluno;
 
 	printf("%d\n",ptr->matricula);
 	printf("%s\n",ptr->nome);
 	printf("%f\n",ptr->media);
	



	return 0;
}