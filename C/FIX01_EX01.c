/*
Nome..: jo�o vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX01: Fa�a um algoritmo que pe�a a idade do usu�rio e, em seguida, digite a mensagem: �Legal! Voc� tem *idade* anos!�.
*/

#include <stdio.h> // biblioteca de input e output
 int main() {
     //declara��o de variaveis
    int idade = 0;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    //processamento
    //resultado
    printf("\n Legal! Voc� tem %d anos!", idade);
return 0;
}
