#include <stdio.h>
/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
FIX04b_EX06: Fa�a um programa em Linguagem C para calcular a m�dia de notas obtida por um grupo de 8 alunos.
*/
int main (){
    int nota = 0, grupo = 1;
    do{
        scanf("%d", &nota);
        printf("nota %d: %d\n", grupo, nota);
        grupo++;
    }while(grupo <= 8);

return 0;
}
