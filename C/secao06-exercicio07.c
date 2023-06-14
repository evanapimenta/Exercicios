// Desenvolva um algoritmo que a) leia quatro números; b) calcule o quadrado de cada um; c) se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize; d) caso contrário, imprima os valores lidos e seus respectivos quadrados;

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, q1, q2, q3, q4;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número: ");
    scanf("%d", &n3);
    printf("Informe o quarto número: ");
    scanf("%d", &n4);

    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;

    if (q3 >= 1000) {
        printf("%d", q3);
    }
    else {
        printf("Número: %d, quadrado: %d\n", n1, q1);
        printf("Número: %d, quadrado: %d\n", n2, q2);
        printf("Número: %d, quadrado: %d\n", n3, q3);
        printf("Número: %d, quadrado: %d\n", n4, q4);
    }
}