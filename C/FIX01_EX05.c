/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX05: Elabore um algoritmo que calcule o pre�o de venda de um carro.
O pre�o de venda � formado pelo pre�o da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS.
As porcentagens s�o sobre o pre�o da montadora, que � lido do usu�rio. Apresente na tela o pre�o final e o valor dos impostos.
*/

#include <stdio.h> // biblioteca de input e output
 int main() {
    //entrada
    float precodocarro = 0, precodamontadora = 0, jur = 0;
    printf("Digite o valor do pre�o da montadora");
    scanf("%f", &precodamontadora);
    //processamento
    jur = (precodamontadora/100) * 43 ;
    precodocarro = (precodamontadora + jur);
    printf("\n preco final e: %f", precodocarro);
    printf("\n pre�o do juros: %f", jur);

 return 0;
 }
