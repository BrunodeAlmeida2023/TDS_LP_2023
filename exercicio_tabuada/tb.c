#include <stdio.h>

int main(){

    int calc, total;

    int resultado[10];

        for(int b=0; b <=10; b++ ){

        printf("Tabuada do %d\n", b);

        for(int i=1; i <=10; i++ ) {
        calc = i * b;
        printf("%d x %d : %d\n", b, i, calc);

        resultado[i] + calc;

        total += calc;

       }

       printf("Total = %d\n", total);
    }
    return 0;
}