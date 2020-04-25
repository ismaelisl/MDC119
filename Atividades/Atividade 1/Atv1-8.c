#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
 setlocale(LC_ALL, "Portuguese");

    int i,j,z,m;
    float media;

    printf("Digite a quantidade de alunos=\n-");
    scanf("%d", &j);
    
    float notas [j][3];

    for(i=0;i<j;i++){
        z = i + 1;
        printf("Digite a primeira nota do aluno %d : ", z);
        scanf("%f", &notas[i][0]);
        printf("Digite a segunda nota do aluno %d: ", z);
        scanf("%f", &notas[i][1]);
        notas[i][2] = (notas[i][0]+notas[i][1])/2;
        media = notas[i][2] + media;
    }

    z = 0; 
    media = media/j;

    printf("\n\tnota 1\tnota 2\tmedia\tSituacao\n");

    for(i=0;i<j;i++){
        z = i + 1;
        printf("Aluno %i- ",z);
        for(m=0;m<3;m++){
            printf("%.2f\t", notas[i][m]);
        }
        if(notas[i][2]>=5){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");

        }
        printf("\n");
    }

    printf("\nMedia total: %.2f\n", media);

    return 0;
}