import java.util.Scanner;

public class Ex3{
	public static void main(String[] args) {
		int vetor[][];
		vetor = new int[8][8];
		int i, j;
		Scanner input = new Scanner(System.in);
		
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				if (i >= j) {
					vetor[i][j] = 1;
				}
				else {
					vetor[i][j] = 0;
				}
			}
		}
		
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++){
				System.out.print(vetor[i][j] + "  ");
		}
		}
		
	
	}
}