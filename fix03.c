/*Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor
valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros.*/

#include <stdio.h>

void atualizarMenor(int *menor, int novo);

int main (){
    int numeroUsuario;
    int menorValor;

    puts("Escreva um numero (negativo pra sair)");
    scanf("%d", &numeroUsuario);
    menorValor = numeroUsuario;

     while (numeroUsuario >= 0){

        atualizarMenor(&menorValor, numeroUsuario);
        printf("O menor valor escrito foi: %d\n", menorValor);

        puts("Escreva um número (negativo pra sair):");
        scanf("%d", &numeroUsuario);
    }

    puts("Entrada negativa: Encerrando o programa...");

    return 0;
}

void atualizarMenor(int *menor, int novo){
    if (novo < *menor){
        *menor = novo;
    }
}