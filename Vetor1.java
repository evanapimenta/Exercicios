import java.util.Scanner;

public class Vetor1{
	public static void main(String[] args) {
		
		int[] numeros; // declara que se trata de uma variável composta
		numeros = new int[10]; // após a declaração, instanciar o objeto com o new, tipo e quantidade de armazenamento.
		int i; // declarar a variável de contagem.
		Scanner entra = new Scanner(System.in); // cria objeto Scanner com o new, e referencia o Scanner(System.in)
		
		for(i=0; i<10;i++){ // loop que vai de 0 a 9 para receber todos os valores.
			System.out.print("Digite o "+(i + 1)+"o. valor do vetor: ");
			numeros[i] = entra.nextInt; // após o uso do Scanner, é necessário após o objeto usar o 'next' que adianta para o programa qual é o tipo de dado desejado (nesse caso, int).
		
		System.out.println("\n\nConteudo do vetor: "); // após o loop, imprimir
		for(i=0; i<10;i++){ // loop que imprime todos os números digitados pelo usuário.
			System.out.println("Valor "+(i + 1)+" vetor: "+ numeros[i]);
		}
	}
}