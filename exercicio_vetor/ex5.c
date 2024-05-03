#include <stdio.h>

int main(){

    int vetor[5];
    int menorValor=0;
    int maiorValor=0;
    int menorPos=0;
    int maiorPos=0;

    printf("Digite um numero porfavor : ");
    scanf("%d", &vetor[0]);

    menorValor = maiorValor = vetor[0];
    
    for(int i = 0; i < 5; i++){
        printf("\nDigite mais um numero : ");
        scanf("%d", &vetor[i]);

        if(vetor[i] < menorValor ) {
            menorValor = vetor[i];
            menorPos = i;
        }else if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
            maiorPos = i;
        }
    }

        printf("\nMenor valor EH: %d e sua posicao EH %d", menorValor, menorPos);
        printf("\nMaior valor EH: %d e sua posicao EH %d", maiorValor, maiorPos+1);




    return 0;
}