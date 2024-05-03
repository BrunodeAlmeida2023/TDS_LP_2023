#include <stdio.h>

int main(){
    
    int vetor [9] = {3, 4, 5, 6, 7, 8, 10, 30, 50, 1};

    for(int i = 0; i <= 9; i++){
        if(vetor[i] % 2 == 0) {
        printf("\n PAR: %d", vetor[i]);
    }else 
        printf("\n IMPAR: %d", vetor[i]);
    }



    return 0;
}