
#include <stdio.h>

int main()
{
    int cod, quant;
    float price;
    printf("Digite o codigo do produto desejado e sua quantiade!: ");
    scanf("%d", &cod);
     
    if(cod == 100) {
        printf("Cachorro quente selecionado! Digite a quantidade de cachorro quente: ");
        scanf("%d", &quant);
        price = 1.20 * quant;
        printf("Preço total: %f", price);
    }else{
        printf("Codigo invalido!!!");
    }

    return 0;
}