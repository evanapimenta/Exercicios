#include <stdio.h>

int main(){
    int num1, num2, soma;
    
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    
    soma = (num1 + num2);
    
    printf("A soma dos dois números digitados é %d", soma);
}