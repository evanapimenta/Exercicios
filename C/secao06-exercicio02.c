#include <stdio.h>

int main() {
    // declaração de variáveis
    int num, a, b;

    // entrada
    printf("Digite um valor: ");
    scanf("%d", &num);

    // processamento
    if (num > 0)
    {
        a = num;
        printf("Valor positivo");
    }
    else {
        b = num;
        printf("Valor negativo");
    }

    printf("%d", num);
    
    return 0;
}