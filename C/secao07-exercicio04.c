//Construa um algoritmo que leia 10 valores inteiros e positivos e:
//a) encontre o maior valor
//b) encontre o menor valor
//c) calcule a média dos números lidos 

#include <stdio.h>

int main(){
    int num, maior = 0, menor = 9999, soma = 0, contador = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Informe um valor: ");
        scanf("%d", &num);

        while (num < 0) {
            printf("Por favor informe apenas números positivos.\nInforme um valor: ");
            scanf("%d", &num);
        }

        if (num > maior) {
            maior = num;
            }
        if (num < menor) {
            menor = num;
        }

        soma += num;
        contador++;
        
    }
    media = (soma / 10);
    printf("%d números informados\n", contador);
    printf("Soma dos números informados: %d\n", soma);
    printf("Média dos números informados: %.2f\n", media);
    printf("Maior número informado: %d\n", maior);
    printf("Menor número informado: %d\n", menor);
        
    return 0;
}