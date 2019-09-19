#include <stdio.h>
#include <stdlib.h>

struct lista
{	
	int info;
		struct lista *prox; 	
};
typedef struct lista Lista;

Lista *lst_cria(void)
{	
		return NULL;
}

Lista *lst_insere(Lista *l, int i)
{
	
	Lista *novo = (Lista*) malloc(sizeof (lista));
	
	novo->info = i;
	novo->prox = l;
	
	return novo;
}

void lst_imprime(Lista *l)
{
	Lista *p;
	
	for (p=l; p!=NULL; p=p->prox)
	{
		printf("info = %d\n", p->info);
	}	
}


int main (void){
	
	Lista *l; //Declara uma lista não iniciada
	l = lst_cria(); // inicia a lista vazia
	
// vai inserir no campo info da lista

	l = lst_insere(l, 23);
	l = lst_insere(l, 45);
	l = lst_insere(l, 56);
	l = lst_insere(l, 78);
	
	lst_imprime(l);
	
	return 0;
}