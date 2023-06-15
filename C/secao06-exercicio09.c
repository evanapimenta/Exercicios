// A secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0.3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades. Se o índice crescer para 0.4 as indústrias do 2º grupo são intimadas a suspenderem suas atividades. Se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
// Faça um algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de empresas.

#include <stdio.h>

int main(){
    float poluicao;

    printf("Informe o nível de poluição: ");
    scanf("%f", &poluicao);
    
    if (poluicao >= 0.3 && poluicao < 0.4) {
        printf("Nível de poluição informado: %.2f\nEmpresas do primeiro grupo: suspender atividades!", poluicao);
    }
    else if (poluicao >= 0.4 && poluicao < 0.5) {
        printf("Nível de poluição informado: %.2f\nEmpresas do segundo grupo: suspender atividades!", poluicao);
    }
    else if (poluicao >= 0.5) {
        printf("Nível de poluição informado: %.2f\nTODAS AS EMPRESAS: SUSPENDER ATIVIDADES!", poluicao);
    }
    else {
        printf("Nível de poluição informado: %.2f\nNível dentro do permitido.", poluicao);
    }

    return 0;

}
