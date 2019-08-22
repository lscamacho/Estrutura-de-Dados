#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma ( float *v, int n){
	if (n == 0){
		return 0;
	}
	return (v[n-1] + soma(v, n-1));
}

int busca_sequencial_R(int n, float x, float *v){
	
	if (n == 0){
			
			return -1;
	}
		
	if (x == v[n-1]){
		
			return n-1;  
	}
		
	return busca_sequencial_R(n-1, x, v);
	
}

int main(){
	
	int i, achou, n;
	float *v;
	float proc;

// Leitura do número de valores
	printf("Entre com o numero de valores do vetor:");
	scanf("%d", &n);

//alocação dinamica
	v=(float*) malloc(n*sizeof(float));
	
	if (v==NULL){
		printf("Memoria insuficiente.\n");
	}

//leitura dos valores
	for (i=0; i<n; i++){
		printf("Entre com o valor %d: ", i+1);
		scanf("%f", &v[i]);
	}

	printf("Calcula a media: ");
	printf("A Media e: %1.f", soma(v,n)/(float)n);
	
	printf("\nEntre com o valor que deseja saber a posicao no vetor: ");
	scanf("%f", &proc);
	
	achou = busca_sequencial_R(n,proc,v);
	
	if (achou == -1){
		printf("\n O numero digitado nao exite no vetor!");
	}
	
	else {
		printf("\n O numero esta na posicao %d", achou);
	}
	
// Calcular a media diretamente agora

	free(v);
	return 0;
}
 /*
 FUNÇÃO PROCURA INTERATIVA
 
 int procura(int n, float k, float *v){
 
 int j, pos =0;
 
 for(j=0; j<n; j++){
 	if(v[j] == k){
 			
 			pos = j+1;
 			break;
	 }
 }
 
 	return pos;
 }
*/
