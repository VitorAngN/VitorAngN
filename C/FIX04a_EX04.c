/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
Enunciado FIX04a_EX04: Fa�a um programa em Linguagem C que receba um n�mero do usu�rio e apresente a fase "Seja bem vindo",
tantas vezes quanto for esse n�mero. Um frase por linha.
*/
#include <stdio.h>
int main(void){
    int a = 0;
    scanf("%d" &a);
    while( a ){
        printf("< %d ", a);
        a+=3;
    }

}
