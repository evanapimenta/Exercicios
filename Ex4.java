import java.util.Scanner;

public class Ex4{
	public static void main(String[] args) {
		int matriz[][];
		matriz = new int[5][5];
		int i, j;
		Scanner input = new Scanner(System.in);
		
		//receber numeros
		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++){
				System.out.print("Valor da posicao ["+(i+1)+"]["+(j+1)+"] da matriz: ");
				matriz[i][j] = input.nextInt();
			}
		}
		
		//imprimir numeros
		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++){
				if (j == i){
					System.out.print(matriz[i][j] + " ");
				}
			}
		}
		System.out.println();
		
		for(i = 0; i < 5; i++){
			for(j = 0; j < 5; j++){
				if (j + i == 5 - 1){
					System.out.print(matriz[i][j] + " ");
				}
			}
		}
		
	}
}
