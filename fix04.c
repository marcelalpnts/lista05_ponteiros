/*Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste
o vetor com tipos de dados diferentes, analise os endereços. O que você observou?*/

#include <stdio.h>

#define TAM 10

int main (){
    int vet[TAM];
    int *ptrVet;

    ptrVet = &vet[0];

    puts("Escreva os elementos do vetor:");

    //preenchendo o vetor
    for (int i = 0; i < TAM; i++){
        scanf("%d", ptrVet + i);
    }

    //imprimindo o vetor

    for(int j = 0; j < TAM; j++){
        printf("[%p]: vet[%d] = %d\n", (void *)(ptrVet + j), j, *(ptrVet + j));
    }
    return 0;
}