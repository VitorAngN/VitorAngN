#include <stdio.h>
/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
Enunciado:FIX04b_EX03: Fa�a um programa em Linguagem C que imprima todos os m�ltiplos de 3, entre 1 e 100.
*/
int main (){
    int a = 0;
    do{
        printf("%d-", a);
        a += 3;
    }while(a <= 100);

return 0;
}
