/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX03: Fa�a um algoritmo que pe�a uma temperatura em graus c�lsius e apresente seu
respectivo valor em fahrenheit. O c�lculo de convers�o �: F = (9 * C / 5) + 32.
*/
#include <stdio.h> // biblioteca de input e output
 int main() {
    //entrada
    float temperaturaC = 0, temperaturaF = 0;
    printf("Informe a temperatura atual em Celsius(C): ");
    scanf("%f", &temperaturaC);
    //processamento
    temperaturaF = (9 * temperaturaC / 5) + 32;
    //saida
    printf("\n A temperatura atual em Fahrenheit �: %f", temperaturaF);
return 0;
}

