//Ler uma variável numérica n e imprimi-la somente se a mesma for maior que 100, caso contrário imprimi-la com o valor 0.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n > 100) 
    {
        printf("%d", n);
    }
    else {
        n = 0;
        printf("%d", n);
    }
}   