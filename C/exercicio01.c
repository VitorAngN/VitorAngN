#include <stdio.h>

int main(){
    int idade = 0;
    char sexo = 0;

    printf("digite a sua idade e seu sexo");
    scanf("%d %c", &idade, &sexo);
    if(sexo != 'f'){
        printf("\n Ol� senhor, voce tem %d anos.", idade);
    }
    else{
        printf("Ol� senhora, voce tem %d anos.", idade);


    }

return 0;
}
