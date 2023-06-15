// Ler um número e verificar se ele é par ou ímpar. Quando for par, armazenar esse valor em p, e quando for ímpar, armazená-lo em i.

#include <stdio.h>

int main(){
	//declaração de variáveis
	int num, p = 0, i = 0;
	
	//entrada
	printf("Informe um número: ");
	scanf("%d", &num);
	
	//processamento
	if (num % 2 == 0) {
		p = num;
	}
	else {
		i = num;
	}
	
	//saída
	printf("%d\n", p);
	printf("%d", i);

	return 0;
}
