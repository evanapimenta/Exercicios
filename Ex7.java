import java.util.Scanner;

public class Ex7{
	public static void main(String[] args) {
		int i, contador = 0, current;
		int[] vetor_a, vetor_b;
		vetor_a = new int[5];
		Scanner input = new Scanner(System.in);
		
		for(i = 0; i < vetor_a.length; i++){
			System.out.print("Informe o " + (i + 1) + "o. valor do vetor: ");
			current = input.nextInt();
			
			if (current % 5 == 0) {
				vetor_a[i] = current;
			}
			else {
				vetor_b[i] = current;
				contador += 1;
			}
			
		}
		
		System.out.print("Voce digitou " + contador + "  numeros nao multiplos de 5.");

	}
}