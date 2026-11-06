/*Escreva um programa que concatene duas strings utilizando ponteiros.*/
#include <stdio.h>
#include <string.h>

#define TAM 30


void copia(char *ptrA, char *ptrB){
    *ptrB = *ptrA;
}

int main (){
    char string1[2*TAM];
    char string2[TAM];

    puts("Escreva a primeira string:");
    fgets(string1,TAM,stdin);
    string1[strcspn(string1, "\n")] = '\0';

    puts("Escreva a segunda string:");
    fgets(string2, TAM, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    //ponteiro que aponta para o fim da string1

    char *ptrfim = string1;
        while(*ptrfim != '\0'){
            ptrfim++;
        }
    
    char *ptr2 = string2;
   
    
    copia(string2, ptrfim);
    return 0;
}