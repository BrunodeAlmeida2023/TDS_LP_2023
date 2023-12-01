#include <stdio.h>

int main () {

    char alfabeto[6];

    alfabeto[0] = 'A';
    alfabeto[1] = 'B';
    alfabeto[2] = 'C';
    alfabeto[3] = 'D';
    alfabeto[4] = 'E';
    alfabeto[5] = 'F';

    for(int i = 0; i <= 5; i++) {
        printf("alfabeto na position %d e: %c\n", i, alfabeto[i]);
    }
    return 0;


}