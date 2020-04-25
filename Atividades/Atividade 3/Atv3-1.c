#include<stdio.h>
#include<stdlib.h>
	int ano,i;
int bissexto (int i){
	if(ano%4==0 && ano%100!=0 || ano%400==0){
	
		return 1;
	}
	else
return 0;
}
int main(){
int result;
	scanf("%d",&ano);
	
result=bissexto(i);
if(result==1){
	printf("O ano eh bissexto\n");
}else if(result==0){

 printf("O ano nao eh bissexto\n");
}
 return 0;
}
