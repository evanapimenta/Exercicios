import java.util.Scanner;

public class Ex2{
	public static void main(String[] args){
		int[][] vetorA, vetorB, vetorC;
		vetorA = new int[2][2];
		vetorB = new int[2][2];
		vetorC = new int[2][2];
		int i, j;
		Scanner input = new Scanner(System.in);
		//vetor A
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++){
				System.out.print("Informe um valor para a posicao ["+(i+1)+"]["+(j+1)+"] do 1o vetor: ");
				vetorA[i][j] = input.nextInt();
			}
		}
		//vetor B
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++){
				System.out.print("Informe um valor para a posicao ["+(i+1)+"]["+(j+1)+"] do 2o vetor: ");
				vetorB[i][j] = input.nextInt();
			}
		}
		
		//soma vetor C
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				vetorC[i][j] = vetorA[i][j] + vetorB[i][j];
			}
		}
				
		//exibir resultado
		System.out.println("Conteudo do 1o vetor:");
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++) {
				System.out.print(vetorA[i][j] + " | ");
			}
		}
		System.out.println();
		System.out.println("Conteudo do 2o vetor:");
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++) {
				System.out.print(vetorB[i][j] + " | ");
			}
		}
		System.out.println();
		
		System.out.println("Conteudo do 3o vetor (soma dos itens dos vetores anteriores):");
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++) {
				System.out.print(vetorC[i][j] + " | ");
			}
		}
		
	}
}