#include <stdio.h>

int main(){

    int total = 0;

    int resultado[11];


    for(int b=1; b <=10; b++ ){

        resultado[b] = 0;

        int calc = 0;

        for(int p=1; p <=10; p++ ) {
            
            calc = b * p;

            printf("%d x %d : %d\n", b, p, calc);

            resultado[b] = resultado[b] + calc;

            total = total + calc;
        }

        printf("----------TOTAL----------  = %d\n ",resultado[b]);
    }

    printf("Valor total das soma deu: %d\n", total);

    return 0;
}