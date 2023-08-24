import java.util.Scanner;

public class Ex1{
	public static void main(String[] args) {
		int[][] matriz;
		matriz = new int[4][4];
		int i, j, soma=0;
		Scanner input = new Scanner(System.in);
		
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				System.out.print("Insira o valor da posição ["+(i+1)+"]["+(j+1)+"] da matriz: ");
				matriz[i][j] = input.nextInt();
				soma = soma + matriz[i][j];
			}
		}
		
		System.out.print("Soma de todos os elementos da matriz: " + soma);
	}
}