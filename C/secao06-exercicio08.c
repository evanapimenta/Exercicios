// Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.

#include <stdio.h>

int main(){
    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        if (num > 0) {
            printf("O número %d é par e positivo.", num);
        }
        else {
            printf("O número %d é par e negativo.", num);
        }
    }
    else {
        if (num > 0) {
            printf("O número %d é ímpar e positivo.", num);
        }
        else {
            printf("O número %d é ímpar e negativo.", num);
        }
    }
}
