#include <stdio.h>
#include <stdlib.h>
struct lista {
int info;
struct lista* prox;
};
typedef struct lista Lista;

//cria lista
Lista* lst_cria(void)
{
	return NULL;
}

//imprime
void lst_imprime(Lista* l)
{
	Lista* p;
	for(p=l;p!=NULL;p=p->prox)
		printf("Info = %d\n",p->info);	
}

//inserção no inicio: retorna a lista att
Lista* lst_insere(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

//retira um elementoda lista
Lista* lst_retira(Lista*l, int v){
	Lista* ant=NULL; //ponteiro para elemento anterior
	Lista* p=l; //pornteiro para percorrer a lista
	//procura elemento da lista
	while(p!=NULL && p->info!=v){
		ant=p;
		p=p->prox;
	}
	//verifica se achou o elemento
	if(p==NULL){
		return l;//nao achou o elemento
	}
	//retire o elemento
	if(ant==NULL){
		//retira o elemento do inicio
		l=p->prox;
	}
	//retira o elemento do meio
	else{
		ant->prox=p->prox;
	}
	free(p);
return l;
}

//insere ordenado (lista ORDENADA)
Lista* lst_insere_ordenado(Lista* l, int v)
{
	Lista* novo;
	Lista* ant=NULL;
	Lista* p=l;
	//procura posicao de inserção
	while(p!=NULL && p->info < v){
		ant=p;
		p=p->prox;
	}
	
	//cria novo elemento(nó)
	novo=(Lista*)malloc(sizeof(Lista));
	novo->info=v;
	
	//encadeia elemento
	if(ant==NULL){
		//insere elemento no inicio
		novo->prox=l;
		l=novo;
	}else{
		//insere elemento no meio da lista
		novo->prox=ant->prox;
		ant->prox=novo;
	}
return l;
}

int main (void){
	
	Lista *l; //Declara uma lista não iniciada
	l = lst_cria(); // inicia a lista vazia
	
// vai inserir no campo info da lista

	l = lst_insere_ordenado(l, 78);
	l = lst_insere_ordenado(l, 56);
	l = lst_insere_ordenado(l, 45);
	l = lst_insere_ordenado(l, 23);
	
	printf("Lista original\n");
	lst_imprime(l);
	printf("\n");	
	
	printf("Lista sem um dos elementos\n");
	l = lst_retira(l, 23);
	lst_imprime(l); //imprime lista atualizada
	printf("\n");

	printf("Lista com um elemento novo ORDENADO\n");
	l=lst_insere_ordenado(l,60);
	l=lst_insere_ordenado(l,100);
	l=lst_insere_ordenado(l,10);

	lst_imprime(l);
	printf("\n");
	
	return 0;
}

