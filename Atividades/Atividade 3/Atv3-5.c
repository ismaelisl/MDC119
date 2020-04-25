#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n){
	if(n>2){
		return (fibonacci(n-1)+fibonacci(n-2));
	}else 
	return 1;
}
int main(){
int i=0;

int a;
int n=1;
scanf("%d",&a);

while(n<=a){
	printf("%d\n",fibonacci(n));
	n++;

}
return 0;
}