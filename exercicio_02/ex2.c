#include <stdio.h>

int main()
{

    char valor1 = 'A';
    int valor2 = 1;
    float valor3 = 3.5; 
    double valor4 = 4.30000;
    char teste;

    //Apresentando dados!
    printf("valor1 %c\n", valor1);
    printf("valor2 %d\n", valor2);
    printf("valor3 %f\n", valor3);
    printf("valor4 %f\n", valor4);

    int Valor=0;

    printf("Digite um numero: ");
    scanf("%d", &Valor);
    printf("Valor digitado foi: %d", Valor);
    return 0;
}