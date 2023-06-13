#include <stdio.h>

int main(){
    //entrada
    float metros;
    int centimetros;
    
    printf("Insira o valor em metros: ");
    scanf("%f", &metros);
    
    //processamento
    
    centimetros = (metros * 100);
    
    //saída
    printf("O valor digitado em metros equivale a %d centímetros", centimetros);

	return 0
}