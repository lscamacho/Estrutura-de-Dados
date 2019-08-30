#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void troca (int *px, int *py);

int main (){
	
	int a = 5, b = 7;
	
	troca(&a,&b);
	
	printf("%d %d\n", a,b); 
		
	return 0;
}
void troca (int *px, int *py){
	
	int temp;
	
	temp = *px;
	*px = *py;
	*py = temp;
	
}

