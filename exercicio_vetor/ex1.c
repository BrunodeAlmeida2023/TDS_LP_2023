#include <stdio.h>

int main(){

    int A [6];
    int soma;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    for(int i = 0; i < 6; i++){
        printf("\nValor da pos %d EH: %d",i, A[i]);
        A[4] = 100;
    }

    soma = A[0] + A[1] + A[5];

    printf("\nValor total EH: %d", soma);    
    return 0;
}