#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fat (int n);

int main(){
	int n, result;
	
	printf("Digite o valor de N!: ");
	scanf("%d",&n);
	result = fat(n);
	
	printf("\nO valor de %d! e: %d ", n, result);
	
}
int fat (int n){
	
	if (n==0){
		
		return 1;
	}
	
	return n*fat(n-1);
}
