# include <stdio.h>

int maior (int a,int b){
	return a > b;
}
int menor (int a,int b){
	return a < b;
}
 void ordena (int *p, int (*funcao)(int a, int b)) {
 	int i,j;
 	for (i = 0;i<10;i++) {
 		for ( j=i;j<10;j++){
 			if((*funcao)(p[i],p[j])){
 				int aux = p[i];
 				p[i] = p[j];
 				p[j] = aux;
			 }
		 }
	 }
 }
 
 void imprimir (int*v){
	int i;
	for(i=0;i<10;i++){
		printf("%i,",v[i]);
	}
}
 
 int main() {
 	int vetor[]={3, 6, 9, 2, 5, 0, 4, 1, 8, 7};
 	
 	ordena(vetor, maior);
 	
 	imprimir(vetor);
 	
 	ordena(vetor, menor);
 	printf("\n\n\n");
 	imprimir(vetor);
 	
return 0;
 }