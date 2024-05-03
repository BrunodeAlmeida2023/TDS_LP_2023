#include <stdio.h>

int main(){

    int vetor[10];
    int menorValor=0;
    int maiorValor=0;

    printf("Digite um numero : ");
    scanf("%d", &vetor[0]);

    menorValor = maiorValor = vetor[0];
    
    for(int i = 0; i < 9; i++){
        printf("\nDigite mais um numero : ");
        scanf("%d", &vetor[i]);

        if(vetor[i] < menorValor ) {
            menorValor = vetor[i];
        }else if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }

        printf("\n Menor valor EH: %d", menorValor);
        printf("\n Maior valor EH: %d", maiorValor);




    return 0;
}