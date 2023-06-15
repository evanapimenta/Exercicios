#include <stdio.h>

int main(){
    //receber quantidade de horas trabalhadas
    //receber o valor da hora
    //multiplicar o valor das horas trabalhadas pelo valor da hora
    //mostrar o resultado
    
    //entrada
    int horas_trabalhadas;
    float valor_hora, salario_total;
    
    printf("Insira o número de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    
    printf("Insira o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    
    //processamento
    salario_total = (horas_trabalhadas * valor_hora);
    //saída
    printf("O salário do funcionário no mês é: R$%.2f", salario_total);

    return 0;
}