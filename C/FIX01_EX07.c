/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX07: Fa�a um algoritmo para calcular a m�dia ponderada de tr�s notas de um aluno
considerando os pesos 2, 3 e 5, respectivamente para a primeira, segunda e terceira nota.
*/
#include <stdio.h> // biblioteca de input e output
#include <math.h> // biblioteca de matematica
int main() {
     //declara��o de variaveis
    float nota1 = 0,
        nota2 = 0,
        nota3 = 0,
        resultado = 0;
    printf("Digite o valor do a, do b e do c: ");
    scanf("%f %f %f",&nota1, &nota2, &nota3);
    //processamento
    resultado = (nota1*2)+(nota2*3)+(nota3*5)/(nota1+nota2+nota3);
    //saida
    printf("\n resultado : %d", resultado);
return 0;
}
