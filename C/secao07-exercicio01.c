// Faça um algoritmo que determine o maior entre N números. A condição de parada é a entrada do valor 0, ou seja, o algoritmo deve continuar calculando o maior até que a entrada seja igual a 0.

#include <stdio.h>

int main(){
    int valor, maior = 0;

    printf("Informe um número: ");
    scanf("%d", &valor);

    while (valor != 0) {
        if (valor > maior) {
            maior = valor;
        }
        printf("Informe um número: ");
        scanf("%d", &valor);
    }
    printf("Fim da execução.\n");
    printf("Maior número informado: %d", maior);
}
