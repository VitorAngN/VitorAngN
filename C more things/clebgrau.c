#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int escolhaLista = 0, escolhaQuestaoAl = 0;
    printf("Lista De Fixa��o - Algoritmos,Condicionais e Repeti��o\n\n");
    printf("Selecione 1: Algoritmos E Condicionais || 2: Estruturas De Repeti��o\n\n");
    scanf("%i",&escolhaLista);

    if (escolhaLista==1) {

     printf("\nOp��o Selecionada: 1 - Algoritmos E Condicionais\n\n");
     printf("Lista De Quest�es De Algoritmos E Condicionais \n\n");
     printf("1- Dada uma quantidade x de Megabytes (MB), converter este valor para Kilobytes (KB), para Bytes (B) e para Gigabytes (GB).Obs.: 1 GB = 1024 MB, 1 MB = 1024 KB, 1 KB = 1024 B.\n\n");
     printf("2- Dado o tempo de uma receita em horas e minutos (Ex.: 1h e 40min), converter esse tempo em segundos.\n\n");
     printf("3- Dados tr�s notas e seus pesos, calcular a m�dia ponderada destas notas.\n\n");
     printf("4- Dados dois n�meros, calcular o valor absoluto da diferen�a entre eles.\n\n");
     printf("5- Dado o peso de tr�s objetos, identificar qual deles � o mais pesado e qual � o menos pesado.\n\n");

     printf("Escolha Uma Quest�o: \n");
     scanf("%i",&escolhaQuestaoAl);




        }
    else if (escolhaLista!=1 || escolhaLista !=2) {
        printf("\nBait");
    }

       if (escolhaQuestaoAl==1) {
        printf("A Quest�o Selecionada Foi 1: \n");
        float x,kb,b,gb;
        printf("Informe Um Valor Em MegaBytes (MB)\n");
        scanf("%f",&x);
        kb = x * 1024;
        gb = x / 1024;
        b = x * 1000000;

        printf("\nValor Em Mb: %.0f \n Valor Em Kb: %.0f \n Valor Em B: %.0f\n% Valor Em Gb: %.2f ",x,kb,b,gb);
       }
     if (escolhaQuestaoAl==2) {
          float hora = 40,minutos,convertido;
          printf("A Quest�o Selecionada Foi 2: \n");
          printf("Informe O N�mero De Horas: \n");
          scanf("%f",&hora);
          printf("Informe O N�mero De Minutos: \n");
          scanf("%f",&minutos);
          convertido = hora * 60;
          convertido = convertido + minutos;
          convertido = minutos * 60;
          printf("Valores Informados: \n Horas: %.1f \n Minutos: %.1f \n Valor Convertido Em Segundos: %0.f",hora,minutos,convertido);
     }
     if (escolhaQuestaoAl==3){
            printf("A Quest�o Selecionada Foi 3: \n");
            float n1,n2,n3,p1,p2,p3,media;
            printf("Informe O Valor Da Primeira Nota: \n");
            scanf("%f",&n1);
            printf("Informe O Peso Da Primeira Nota: \n");
            scanf("%f",&p1);
            printf("Informe O Valor Segunda Nota: \n");
            scanf("%f",&n2);
            printf("Informe O Peso Da Segunda Nota: \n");
            scanf("%f",&p2);
            printf("Informe O Valor Terceira Nota: \n");
            scanf("%f",&n3);
            printf("Informe O Peso Da Terceira Nota: \n");
            scanf("%f",&p3);
            media = (n1 * p1 + n2 * p2 + n3 * p3)/ (p1 + p2 + p3);

            printf("A Media Ponderada Foi %.2f",media);}

     if   (escolhaQuestaoAl==4){
            printf("A Quest�o Selecionada Foi 4: \n");}

     if (escolhaQuestaoAl==5){
        printf("A Quest�o Selecionada Foi 5: \n");
        float p1,p2,p3,maior;
           printf("Informe O Primeiro Peso: \n");
            scanf("%f",&p1);
            printf("Informe O Segundo Peso: \n");
            scanf("%f",&p2);
            printf("Informe O Terceiro Peso \n");
            scanf("%f",&p3);

       if (p1>p2 && p1>p3 && p2<p3){
        printf("p1 � maior!");
        printf("p2 medio");
        printf("p3 baixo");
       }
       if (p2>p1 && p2>p3 && p1<p3){
        printf("p2 maior");
        printf("p3 medio");
        printf("p1 baixo");
       }
       if (p3>p1 && p3>p2 && p2<p1 && p2>p1
           ){
        printf("p3 maior");
        printf("p1 medio");
        printf("p2 baixo");
       }
     }

}













