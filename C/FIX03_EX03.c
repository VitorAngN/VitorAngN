/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX03_EX03: Fa�a um programa em linguagem C que receba o valor do sal�rio de um funcion�rio, se ele ganhar menos que 2 sal�rios m�nimos, acres�a um b�nus de 10% ao sal�rio a receber.
*/
#include <stdio.h> // biblioteca de input e output
 int main() {
    float salario = 0;
        printf("digite seu salario: ");
        scanf("%f", &salario);
        if(salario < 2*1212){
         salario = (salario/100*10 + salario);
        }
    printf("\n seu salario final sera: %f ", salario);

 return 0;
 }
