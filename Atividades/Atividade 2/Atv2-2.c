#include<stdio.h>
#include<stdlib.h>
union u_produto{
	char nome[30];
	float preco;
	float volume;
	float peso;

}produto01;
struct s_produto{
	char nome[30];
	float preco;
	float volume;
	float peso;
}produto02;

struct s_item{
	char nome[30];
	float preco;
	float volume;
	float peso;
}produto3,produto4;

int main(){
	printf("Union:%d\n",sizeof(produto01));
	printf("Struct:%d\n",sizeof(produto02));
}