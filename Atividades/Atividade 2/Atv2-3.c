#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int x;
	int *ptr;
	printf("%p\n",ptr);
	x=2;
	ptr=&x;
		printf("%d\n",x);
		printf("%p\n",*ptr);
	
		*ptr = 10;
		
		printf("%d\n",x);
		printf("%p\n",*ptr);
	
		
		
		
		
		return 0;
}