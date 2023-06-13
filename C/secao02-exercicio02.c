#include <stdio.h>

int main(){
    int num1, num2, soma, multiplicacao;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    multiplicacao = soma * num1;
    
    printf("O resultado da multiplicação foi %d", multiplicacao);
}