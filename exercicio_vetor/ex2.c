#include <stdio.h>

int main(){

    int vetor[8];
    int digitado;
    int total;

    for(int i = 1; i <= 8; i++){
        printf("\nDigite 8 numeros porfavor: ");
        scanf("%d", &vetor[i]);
    }

    total = vetor[3] + vetor[5];
    printf("\nSoma do valor X = %d + valor Y = %d EH = %d", vetor[3], vetor[5], total);

    return 0;
}