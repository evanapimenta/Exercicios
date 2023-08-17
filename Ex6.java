import java.util.Scanner;

public class Ex6{
	public static void main(String[] args) {
		int i, total = 20;
		int[] vetor1, vetor2;
		vetor1 = new int[total];
		vetor2 = new int[total];
		Scanner input = new Scanner(System.in);
		
		for (i = 0; i < vetor1.length; i++){
			System.out.print("Informe o " + (i + 1) + "o. valor do vetor:");
			vetor1[i] = input.nextInt();
			vetor2[((vetor1.length - 1) - i)] = vetor1[i];
		}
		
		System.out.println("Conteudo do vetor 1:");
		
		for (i = 0; i < vetor1.length; i++){
			System.out.print(vetor1[i] + " | ");
		}
		
		System.out.println("Conteudo do vetor apos troca:");
		
		for (i = 0; i < vetor1.length; i++){
			System.out.print(vetor2[i] + " | ");
		}
	}
	
}