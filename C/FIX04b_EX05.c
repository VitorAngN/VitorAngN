#include <stdio.h>
/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
FIX04b_EX05: Fa�a um programa em Linguagem C para apresentar a tabuada de um n�mero escolhido pelo usu�rio (1 a 10).
*/
int main (){
    int a = 0, b = 0, res = 0;
    scanf("%d", &a);
    printf("%d\n", a);
    do{

        res = a * b;
        printf("%d * %d = %d\n", a, b, res);
        b++;
    }while(b <= 10);

return 0;
}
