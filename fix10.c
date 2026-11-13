/*Escreva um programa que gere um vetor X com números pseudoaleatórios no intervalo [0,N − 1].
Crie um vetor F com N posições e armazene em cada posição de F a quantidade de ocorrências
dos elementos de X.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14

int main (){
    srand(time(NULL));
    int N;

    puts("Escreva o valor de N");
    scanf("%d", &N);

    int vetX[TAM];
    int vetF[N];

    for (int i = 0; i < TAM; i++){
        *(vetX + i) = rand() % N;
    }

    //zerando o vetor F
    for (int j = 0; j < N; j++){
        *(vetF + j) = 0;
    }

    for (int i = 0; i < TAM; i++) {
        int valor = *(vetX + i); 
        (*(vetF + valor))++;     
    }

    // exibindo os resultados
    printf("X = [ ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(vetX + i));
    }
    puts("]");

    printf("F = [ ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(vetF + i));
    }
    puts("]");

    return 0;
}