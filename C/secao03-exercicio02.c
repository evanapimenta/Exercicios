#include <stdio.h>

int main(){
    
    int quant_minima, quant_maxima;
    float estoque_medio;
    
    printf("Insira quantidade mínima de produto: ");
    scanf("%d", &quant_minima);
    
    printf("Insira a quantidade máxima de produto: ");
    scanf("%d", &quant_maxima);
        
    estoque_medio = (quant_minima + quant_maxima) / 2;
    
    printf("A média do estoque é %2.f", estoque_medio);

    return 0;
    
}