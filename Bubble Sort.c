void bubble_sort (float *vet, int n) {      
    
	int flag, i, aux;   
    
   	while (flag == 1)
	   {
	         flag = 0;
      
	  for (i = 0; i < (n - 1); i++) {
   
   /* Verfica se o vetor está em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */
   if (vet[i] > vet[i+1]) {
     /* Caso não esteja, ordena */
     aux = vet[i];
     vet[i] = vet[i+1];
     vet[i+1] = aux;
     flag =1;
   		}
      }
	}
    /* Imprime o vetor ordenado em ordem crescente */
    for (i = 0; i < n; i++) {
      printf ("%.0f ",vet[i]);
    }
    printf ("\n");
  }
