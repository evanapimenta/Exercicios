// Elabore um algoritmo que, dadaa a idade de um nadador, classifique-o em uma das seguintes categorias: 
//Infantil-A = 5 a 7 anos
//Infantil-B = 8 a 11 anos
//Juvenil-A = 12 a 13 anos
//Juvenil-B = 14 a 17 anos
///Adultos = Maiores de 18 anos

#include <stdio.h>

int main(){
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Idade: %d\nCategoria: Infantil-A", idade);
    }
    else if (idade >= 8 && idade <= 11) {
        printf("Idade: %d\nCategoria: Infantil-B", idade);
    }
    else if (idade >= 12 && idade <= 13) {
        printf("Idade: %d\nCategoria: Juvenil-A", idade);
    }
    else if (idade >= 14 && idade <= 17) {
        printf("Idade: %d\nCategoria: Juvenil-B", idade);
    }
    else if (idade >= 18) {
        printf("Idade: %d\nCategoria: Adulto", idade);
    }
    else {
        printf("Idade: insuficiente para natação.", idade);
    }

    return 0;


}