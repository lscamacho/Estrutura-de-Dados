#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int i = 0, j, num, n;
	int *M;
	
	// Leitura do tamanho da matriz 
	
	printf("\nEntre com o tamanho n da matriz quadrada n x n: ");
	scanf("%d", &n);
	
	// Alocção dinamica da matriz
		
	M = (int*) malloc(n*n*sizeof(int)); 
	
		
	// Faz a leitura da matriz M
	
	for (i=0; i<n; i++){
			
		for (j=0; j<n; j++){
		
			
			printf("Entre com o elemento (%d - %d): ", i,j);
			scanf("%d", &M[i*n+j]);
	}
  }
	// Mostra a matriz
	
	printf("\nEsta é a matriz lida\n");
	
	for (i=0; i<n; i++){
		
		for (j=0; j<n; j++){
			
			printf("%6d", M[i*n+j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
