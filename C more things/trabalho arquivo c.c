/*
    |CABE�ALHO|
Nome: Joao Vitor Angelim Nogueira
Turma..: EC31A-;C11
Data..: 08/012/2022
Enunciado:trabalho de algoritmos: fa�a uma Agenda telefonica com as fun��es indicadas no PDF repassado pelo moodle.

  */
// bibliotecas
#include <stdio.h>
#include <math.h>
#include <string.h>
// prot�tipos


// constantes
/* struct principal */
/* Structs
Aqui sera as structs com o contato da pessoa contendo
todas as informa��es necessarias.
*/
/*struct do endere�o do contato contendo todas as informa��es */
typedef struct Endereco{
        char rua[50];
        int numeroC;
        char cep[15];
        char cidade[30];
        char estado[3];
} TpEndereco;
/*struct do telefone do contato */
typedef struct telefone{
    int ddd;
    long int numero;

} TpNumero;
typedef struct DataNascimento{
    int dia;
    int mes;
    int ano;



} TpDataNascimento;





typedef struct Contato{
    char nome[50];
    char email[50];
    TpEndereco endereco;
    TpNumero numero;
    TpDataNascimento data;
    char observacao[256];

} Tpcontato;



// constantes

Tpcontato contato[100];



// fun��es
/* fun��o imprimir contato
Para usar use um parametro lop

*/
imprimirContato(int lop){
        int i;
        i = lop;
//os tra�os produzem um menu ao usuario
    printf("______________________________________________________\n");
    printf("|nome: %s", contato[i].nome);
    printf("|E-mail: %s", contato[i].email);
    printf("|Endereco:");
    printf("|Rua: %s", contato[i].endereco.rua);
    printf("|N-%d ", contato[i].endereco.numeroC);
    printf("|Estado: %s ", contato[i].endereco.estado);
    printf("|Cidade: %s", contato[i].endereco.cidade);
    printf("|CEP: %s", contato[i].endereco.cep);
    printf("|TELEFONE:");
    printf("(%d)", contato[i].numero.ddd);
    printf("%d\n", contato[i].numero.numero);
    printf("|nascimento:");
    printf("%d", contato[i].data.dia);
    printf("/%d/", contato[i].data.mes);
    printf("%d\n", contato[i].data.ano);
    printf("L_____________________________________________________\n");
    printf("______________________________________________________\n");
    printf("Observacao:%s", contato[i].observacao);
    printf("L_____________________________________________________\n");
}
/*  fun��es ( fun��o para
    buscar um contato por
    m�s de aniversario,
    imprimir o cadastro de todas as pessoas
    que tem aniversario no mesmo m�s.)
    */


buscarData(){
    int lop = 0;
    int i = 0;
    int mes = 0;
    printf("digite o mes do aniversario: \n");
    scanf("%d", &mes);
    switch(mes){
        case(1):
            printf("voc� digitou mes 1 aqui est� a lista: \n");
            while(lop < strlen(contato)){
                if(contato[lop].data.mes == mes){
                    printf("todos os dados do contato %d\n", mes);
                    imprimirContato(lop);
                    lop++;
                }else{
                    lop++;
                }
            }
            break;
        case(2):
            printf("voc� digitou mes 2 aqui est� a lista: \n");
            while(lop < strlen(contato)){
                if(contato[lop].data.mes == mes){
                    printf("todos os dados do contato %d\n", mes);
                    imprimirContato(lop);
                    lop++;
                }else{
                    lop++;
                }
                }
            break;
    case(3):
        printf("voc� digitou mes 3 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(4):
        printf("voc� digitou mes 4 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(5):
        printf("voc� digitou mes 5 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(6):
        printf("voc� digitou mes 6 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(7):
        printf("voc� digitou mes 7 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(8):
        printf("voc� digitou mes 8 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(9):
        printf("voc� digitou mes 9 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(10):
        printf("voc� digitou mes 10 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
    case(11):
        printf("voc� digitou mes 11 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
     case(12):
        printf("voc� digitou mes 12 aqui est� a lista: \n");
        while(lop < strlen(contato)){
            if(contato[lop].data.mes == mes){
                printf("todos os dados do contato %d\n", mes);
                imprimirContato(lop);
                lop++;
            }else{
                lop++;
            }
        }
        break;
        default:
            printf("Mes Invalido \n");
            return buscarData();
    }
    return 0;

}

int validarEstado(char str[], int i){
    char estado[27][3] = {"AC ", "Al ", "AP", "AM", "BA",
     "CE", "DF", "ES", "GO", "MA", "MT", "MS ","MG", "PA",
      "PB", "PR","PE", "PI", "RJ", "RN", "RS","RO", "RR",
        "SC", "SP", "SE", "TO"};
    int j = 0, k = 0;
        for(; 27 > k ;k++){
            if(strcmp(str, estado[k]) != 1 && strcmp(str, estado[k]) != -1){
                printf("a comparacao correta %d\n", strcmp(str, estado[k]));
            //retorna 1 quando certo
                return 1;
            }
        }
    return 0;

}

int ValidarDia (int dia, int i) {
    int c = 0,
        j = 0;
        c = i;
    j = dia;
    if (contato[c].data.dia >= 1 && contato[c].data.dia <= 31) {
        return 1;
    } else {
        return 0;
    }
}

int ValidarMes (int mes,int i) {
    int c = 0,
        j= 0;
        c = i;
    j = mes;
    if (contato[c].data.mes >= 1 && contato[c].data.mes <= 12) {
        return 1;
    } else {
        return 0;
    }
}

int ValidarAno (int ano, int i) {
    int c = 0,
        j = 0;
        c = i;
    j = ano;
    if (contato[c].data.ano >= 1900 && contato[c].data.ano <= 2022) {
        return 1;
    } else {
        return 0;
    }
}

int Validarcep (int ind) {
    int c = 0;
    int j = 0;
    c = ind;
    int temtraco = 0;
    int antestraco = 0;
    int aux = 0;
    int depoistraco = 0;
    for (j = 0; contato[c].endereco.cep[j] != '\0'; j++) {
        if (contato[c].endereco.cep[j] == '-') {
            temtraco = 1;
        }
    }
    for (j = 0; contato[c].endereco.cep[j] != '-'; j++) {
        if(j == 4) {
            antestraco = 1;
        }
    }
    aux = strlen(contato[c].endereco.cep);
    for(j = strlen(contato[c].endereco.cep); contato[c].endereco.cep[j] != '-'; j--) {
        if(aux == j + 3) {
            depoistraco = 1;
        }
    }

    if(temtraco == 1 && depoistraco == 1 && antestraco == 1) {
        return 1;
    } else {
        return 0;
    }
}

Tpcontato Recebercontato (int ind){
    int c = 0;
    int bolean = 0, j = 0;
    c = ind;
    int valimes,valiano,validia;
    fflush(stdin);
    printf("________________________________________________________\n");
    printf("Digite o nome do contato:                               |\n");
    fgets(contato[c].nome, 50, stdin);
    fflush(stdin);
    printf("Digite o email:                                         |\n");
    fgets(contato[c].email, 50, stdin);
    fflush(stdin);
    printf("Digite a rua:                                           |\n");
    fgets(contato[c].endereco.rua, 50, stdin);
    fflush(stdin);
    printf("Digite o numero da casa:                                |\n");
    scanf("%d", &contato[c].endereco.numeroC);
    fflush(stdin);
    printf("Digite o CEP:                                           |\n");
    fgets(contato[c].endereco.cep, 15, stdin);
    fflush(stdin);
    bolean = Validarcep(c);
    while(bolean != 1){
        printf("digite um cep valido: ");
        fflush(stdin);
        scanf("%s", contato[c].endereco.cep);
        bolean = Validarcep(c);
        fflush(stdin);
    }
    printf("Digite a cidade:                                        |\n");
    fgets(contato[c].endereco.cidade, 30, stdin);
    fflush(stdin);
    printf("Digite a abreviatura do estado(COM LETRA MAIUSCOLA):    |\n");
    fgets(contato[c].endereco.estado, 3, stdin);
    fflush(stdin);
    bolean = validarEstado(contato[c].endereco.estado, c);
    if (bolean == 0){
        fflush(stdin);
        printf("seu estado est� incorreto rescreva o contato:           |\n ");
        bolean = 0;
        return Recebercontato(c);
    }else{
        bolean = 0;
        printf("seu estado foi verificado e esta correto\n");
    }

    fflush(stdin);
    printf("Digite o DDD:                                           |\n");
    scanf("%d", &contato[c].numero.ddd);
    fflush(stdin);
    printf("Digite o telefone:                                      |\n");
    scanf("%ld",&contato[c].numero.numero);
    fflush(stdin);
    printf("Digite o dia do nascimento:                             |\n");
    scanf("%d", &contato[c].data.dia);
    bolean = ValidarDia(contato[c].data.dia, c);
    while (bolean != 1) {
        printf("Digite um dia valido :\n");
        scanf("%d", &contato[c].data.dia);
        fflush(stdin);
        bolean = ValidarDia(contato[c].data.dia, c);
    }
    fflush(stdin);
    printf("Digite o mes de nascimento:                             |\n");
    scanf("%d", &contato[c].data.mes);
    fflush(stdin);
    bolean = ValidarMes(contato[c].data.mes, c);
    while (bolean != 1){
        printf("Digite um mes valido :\n");
        scanf("%d", &contato[c].data.mes);
        fflush(stdin);
        bolean = ValidarMes(contato[c].data.mes, c);
    }
    fflush(stdin);
    printf("Digite o ano de nascimento:                             |\n");
    scanf("%d", &contato[c].data.ano);
    fflush(stdin);
    bolean = ValidarAno(contato[c].data.ano, c);
    while (bolean != 1) {
        printf("Digite um ano valido :\n");
        scanf("%d", &contato[c].data.ano);
        fflush(stdin);
        bolean = ValidarAno(contato[c].data.ano, c);
    }
    fflush(stdin);
    printf("L______________________________________________________\n");
    printf(" ______________________________________________________\n");
    printf("|Digite as observacoes sobre o contato                 |:\n");
    fgets(contato[c].observacao,256,stdin);
    fflush(stdin);
    printf("L______________________________________________________\n");

}


void Resumoddd (int ind) {
    int inddd;
    int c;
    c = ind;
    for (inddd = 11; inddd <= 97; inddd++ ) {   // 11 � o menor n�mero de DDD do pa�s e 97 � o maior
        for(c = 0; c < 100; c++) {
            if(contato[c].numero.ddd == inddd) {
                printf("Contatos Salvos com DDD %d\n", contato[c].numero.ddd);
                printf("Nome : %s\n", contato[c].nome);
                printf("Telefone : (%d)%ld\n", contato[c].numero.ddd, contato[c].numero.numero);
                printf("Email : %s\n\n", contato[c].email);
            }
        }
    }
}



    ordemAlfabetica(int ind){
        //usar a struct contato para
        int c = 0,
            k = 0,
            i = 0,
            aux = 0,
            j = 0;
        j = ind-1;
        char nomeAux[50];
            for(; c < j; c++){
                if(strcmp(contato[c].nome, contato[c + 1].nome) < 0){
                    strcpy(nomeAux, contato[c].email);
                    strcpy(contato[k].email, nomeAux);

                    strcpy(nomeAux, contato[c].nome);
                    strcpy(contato[k].nome, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.rua);
                    strcpy(contato[k].endereco.rua, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.estado);
                    strcpy(contato[k].endereco.estado, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.cidade);
                    strcpy(contato[k].endereco.cidade, nomeAux);

                    strcpy(nomeAux, contato[c].observacao);
                    strcpy(contato[k].observacao, nomeAux);

                    aux = contato[c].endereco.numeroC;
                    contato[k].endereco.numeroC = aux;

                    strcpy(nomeAux, contato[c].endereco.cep);
                    strcpy(contato[k].endereco.cep, nomeAux);

                    aux = contato[c].numero.ddd;
                    contato[k].numero.ddd = aux;

                    aux = contato[c].numero.numero;
                    contato[k].numero.numero = aux;

                    aux = contato[c].data.ano;
                    contato[k].data.ano = aux;

                    aux = contato[c].data.dia;
                    contato[k].data.dia = aux;

                    aux = contato[c].data.mes;
                    contato[k].data.mes = aux;

                    if(k == j){
                    }else{
                    k++;
                    }
                }else{
                    strcpy(nomeAux, contato[c+1].nome);
                    strcpy(contato[c+1].nome, contato[c].nome);
                    strcpy(contato[c].nome, nomeAux);

                    strcpy(nomeAux, contato[c+1].email);
                    strcpy(contato[c+1].email, contato[c].email);
                    strcpy(contato[c].email, nomeAux);

                    strcpy(nomeAux, contato[c+1].endereco.cep);
                    strcpy(contato[c+1].endereco.cep, contato[c].endereco.cep);
                    strcpy(contato[c].endereco.cep, nomeAux);

                    strcpy(nomeAux, contato[c+1].endereco.cidade);
                    strcpy(contato[c+1].endereco.cidade, contato[c].endereco.cidade);
                    strcpy(contato[c].endereco.cidade, nomeAux);

                    strcpy(nomeAux, contato[c+1].endereco.estado);
                    strcpy(contato[c+1].endereco.estado, contato[c].endereco.estado);
                    strcpy(contato[c].endereco.estado, nomeAux);

                    strcpy(nomeAux, contato[c+1].endereco.rua);
                    strcpy(contato[c+1].endereco.rua, contato[c].endereco.rua);
                    strcpy(contato[c].endereco.rua, nomeAux);

                    strcpy(nomeAux, contato[c+1].observacao);
                    strcpy(contato[c+1].observacao, contato[c].observacao);
                    strcpy(contato[c].observacao, nomeAux);

                    aux = contato[c+1].data.ano;
                    contato[c].data.ano = contato[c+1].data.ano;
                    contato[c].data.ano = aux;

                    aux = contato[c+1].data.dia;
                    contato[c].data.dia = contato[c+1].data.dia;
                    contato[c].data.dia = aux;

                    aux = contato[c+1].data.mes;
                    contato[c].data.mes = contato[c+1].data.mes;
                    contato[c].data.mes = aux;

                    aux = contato[c+1].endereco.numeroC;
                    contato[c].endereco.numeroC = contato[c+1].endereco.numeroC;
                    contato[c].endereco.numeroC = aux;

                    aux = contato[c+1].numero.ddd;
                    contato[c].numero.ddd = contato[c+1].numero.ddd;
                    contato[c].numero.ddd = aux;

                    aux = contato[c+1].numero.numero;
                    contato[c].numero.numero = contato[c+1].numero.numero;
                    contato[c].numero.numero = aux;

                    if(k == j){
                    }else{
                    }
                    k++;
                }
            }
        k = 0;
        for(k = 0; k <= c; k++){
            printf("nome atual %d : %s\n", k, contato[k].nome);
        }
    return 0;
}


/* fun��o principal
aqui fica todo o funcionamento da agenda de contatos
*/
int main (void){


    int validade;
    int c = 0;
    int a = 0;
    int b = 0;
    int i = 0;
    int opcao;
    int bolean = 0;
    int lop;
    int ind = 0;
    ind = 4;
    struct Contato contato[100];
    /*mini menu*/
    while (1) {
        printf(" ________________________________________________________\n");
        printf("|Escolha a funcao desejada                               |\n");
        printf("|5 : Imprimir contatos em ordem alfabetica               |\n");
        printf("|4 : Imprimir resumo dos contatos ordenados pelo DDD     |\n");
        printf("|3 : Imprimir um contato                                 |\n");
        printf("|2 : Buscar por data                                     |\n");
        printf("|1 : Receber contato                                     |\n");
        printf("|0 : Encerrar programa                                   |\n");
        printf("L________________________________________________________|\n");
        scanf("%d", &opcao);
        fflush(stdin);
        switch(opcao) {
            case 0:
            printf("Programa encerrado");
            return 0;
            break;
            case 1:
                if(ind < 100){
            Recebercontato(ind);
            ind++;
                }
            break;
            case 2:
            buscarData();
            break;
            case 3:
            printf("digite o contato desejado ");
            scanf("%d", &lop);
            fflush(stdin);
            imprimirContato(lop);
            break;
            case 4:
            Resumoddd (c);
            break;
            case 5:
            printf("o indice t� valendo: %d", ind);
            for(a = 0; a < ind-1; a++){
            ordemAlfabetica(ind);

            }
            for(a = 0; a < ind; a++){
            imprimirContato(a);
            }


        }
    }


    return 0;




}
