/*Implemente o método de ordenação bolha utilizando ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main (){
    srand(time(NULL));
    int vet[TAM];
//preenchendo o vetor
    puts("preenchendo o vetor");
    for (int i = 0; i < TAM; i++){
        vet[i] = rand() % 10;
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    int *bubble;
    bubble = vet;   // equivalente a &vet[0]

    //aplicando o bolha
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (*(bubble + j) > *(bubble + j + 1)) {
                int aux = *(bubble + j);
                *(bubble + j) = *(bubble + j + 1);
            *(bubble + j + 1) = aux;
        }
    }
}

printf("\nVetor ordenado:\n");
for (int i = 0; i < TAM; i++) {
    printf("vet[%d] = %d\n", i, *(bubble + i));
}

    return 0;
}