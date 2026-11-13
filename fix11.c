#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14 //tam do exemplo

int main() {
    srand(time(NULL));
    int N;

    puts("Escreva o valor de N:");
    scanf("%d", &N);

    int vetX[TAM], vetY[TAM];
    int matM[N][N];

    for (int i = 0; i < TAM; i++) {
        *(vetX + i) = rand() % N;
        *(vetY + i) = rand() % N;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *(*(matM + i) + j) = 0;
        }
    }

    // contando as coocorrências
    for (int i = 0; i < TAM; i++) {
        int col = *(vetX + i);
        int lin = *(vetY + i);
        (*(*(matM + lin) + col))++; 
    }

    //Exibindo a matriz M
    puts("\nMatriz M:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(matM + i) + j));
        }
        puts("");
    }

    return 0;
}