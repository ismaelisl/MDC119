#include<stdio.h>
#include<stdlib.h>
int h,m,s;
int conversor(int h,int m,int s){
	h=h*3600;
	m=m*60;
	return (h+m+s);
}
int main(){
	printf("Insira o valor das horas, dos minutos e dos segundos, respectivamente: \n");
	
	scanf("%d %d %d",&h,&m,&s);
printf("%d segundos",conversor(h,m,s))	;
return 0;
}