//Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita uma mensagem: "Múltiplo de 10".

#include <stdio.h>

int main(){

    for (int i = 1; i <= 100; i++) {
        printf("\n%d", i);

        if (i % 10 == 0) {
            printf("- Múltiplo de 10!");
        }
    }

    return 0;
}