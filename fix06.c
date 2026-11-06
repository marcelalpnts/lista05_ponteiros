/*Escreva um programa que copie uma string para outra usando ponteiros.*/
#include <stdio.h>
#include <string.h>

#define TAM 30

void copia(char *ptrA, char *ptrB){
    *ptrB = *ptrA;
}

int main (){
    char string1[TAM];
    char string2[TAM];

    puts("Escreva o texto da primeira string:");
    fgets(string1,TAM,stdin);
    string1[strcspn(string1, "\n")] = '\0';
    puts("Escreva o texto da segunda string (que será substituído pela primeira):");
    fgets(string2,TAM,stdin);
    string2[strcspn(string2, "\n")] = '\0';
    
    char *origin = string1;
    char *dest = string2;

    while (*origin != '\0'){
        copia(origin,dest);
        origin++;
        dest++;
    }

    *dest = '\0';

    printf("A primeira string é '%s'; a segunda string agora é '%s' também.\n", string1, string2);
    return 0;
}