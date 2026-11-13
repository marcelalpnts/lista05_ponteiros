#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14

int main() {
    srand(time(NULL));
    int N;

    puts("Escreva o valor de N:");
    scanf("%d", &N);

    int vetX[TAM], vetY[TAM];
    int matM[N][N];

    
    for (int i = 0; i < TAM; i++) {
        int xi = rand() % N;
        *(vetX + i) = xi;

        int r = (rand() % 10) + 1; 
        int yi;

        if (r > 0 && r <= 3) {
            yi = xi;
        } else if (r > 3 && r <= 5) {
            yi = xi - 1;
        } else if (r > 5 && r <= 7) {
            yi = xi + 1;
        } else if (r > 8 && r <= 9) {
            yi = xi - 2;
        } else if (r > 9 && r <= 10) {
            yi = xi + 2;
        } else {
            yi = xi; 
        }

        // tratando valores limites
        if (yi < 0) {
            yi = 0;
        } else if (yi >= N) {
            yi = N - 1;
        }

        *(vetY + i) = yi;
    }

    // zerando M
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *(*(matM + i) + j) = 0;
        }
    }

    // contando cooconcorrencias
    for (int i = 0; i < TAM; i++) {
        int col = *(vetX + i);
        int lin = *(vetY + i);
        (*(*(matM + lin) + col))++;
    }

    // exibindo M
    puts("\nMatriz M:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(matM + i) + j));
        }
        puts("");
    }

    return 0;
}