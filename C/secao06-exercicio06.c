//Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código e número de horas trabalhadas de um operário. Calcule o salário sabendo-se que ele ganha R$10,00 por hora. Quando o número de horas exceder a 50, calcule o excesso de pagamento armazenando-o na variável 'e'. Caso contrário, zerar tal variável. A hora excedente do trabalho vale R$20,00. No final do processamento imprimir o salário total e o salário excedente.

#include <stdio.h>

int main(){
    int c;
    float n, salario, e = 0, hora_extra;

    printf("Informe o código do funcionário: ");
    scanf("%d", &c);

    printf("Informe o número de horas trabalhadas pelo funcionário: ");
    scanf("%f", &n);

    if (n > 50) {
        e = n - 50;
        hora_extra = e * 20.00;
    }

    salario = ((n - e) * 10.00) + hora_extra;

    printf("Salário total: R$%.2f\n", salario);
    printf("Salário excedente: R$%.2f", hora_extra);
    
    return 0;
}