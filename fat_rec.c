#include <stdio.h>

int fat_rec( int n){

        if (n == 0) return 1;

        return n * fat_rec(n-1);
}

int main (){

    int num, result;

    printf("Digite o número que deseja saber o fatorial: ");
    scanf("%i", &num);

    result = fat_rec (num);

    printf("%i\n", result);

    return 0;
}