/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX03_EX01: Fa�a um programa em linguagem C que leia uma valor do usu�rio e diga se ele � um valor igual a zero.
*/
#include <stdio.h> // biblioteca de input e output
int main() {
    int valor = 0;
        printf("digite um valor");
        scanf("%d", &valor);
    if(valor == 0){
        printf("\n seu valor %d e igual a 0", valor);
    }
    printf("\n seu valor e: %d ", valor);


 return 0;
 }
