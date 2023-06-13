// Faça um algoritmo que leia a variável p (peso de peixes) e verifique se há excesso. Se houver, gravar na variável e (excesso), e na variável m o valor da multa a ser paga. Caso contrário, mostrar tais variáveis com o conteúdo 'zero'.

//1. escreva "Insira o peso dos peixes em kg"
//2. receber peso
//3. se peso > 50 então
//	excesso = peso - 50
//	multa = (excesso * 4)
//4. senão
//	excesso = 0
//	multa = 0
//5. escreva "Peso:" + peso 	
//6. escreva "Excesso:" + excesso
//7. escreva "Multa:" + multa

//inicialização
#include <stdio.h>

int main(){
	float peso, excesso, multa;
	
	printf("Informe o peso dos peixes: ");
	scanf("%f", &peso);
	
	if (peso > 50) {
		excesso = peso - 50;
		multa = (excesso * 4);
	}
	else {
		excesso = 0;
		multa = 0;
	}
	
	printf("Peso: %.2fkg", peso);
	printf("\nExcesso: %.2fkg", excesso);
	printf("\nMulta: R$%.2f", multa);
}


	
