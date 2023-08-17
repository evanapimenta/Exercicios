// num, divis
// i, x
// receber num
// receber divis
// for loop que loopa o divisão do num pelo divis (x++ para o loop rodar em todos os elementos da array)
// se num[i]  % divis[i] == 0 = imprimir (encontrado no indice[x])
// imprimir os numeros do vetor
import java.util.Scanner;

public class Ex8{
	public static void main(String[] args){
		int i, x = 0, division;
		int[] num, divis;
		num = new int[5];
		divis = new int[3];
		Scanner input = new Scanner(System.in);
		
		// receber valores
		for (i = 0; i < num.length; i++){
			System.out.print("Informe o " + (i + 1) + "o. valor do vetor de numeradores: ");
			num[i] = input.nextInt();
		}
		
		for (i = 0; i < num.length; i++){
			System.out.print(num[i] + " | ");
		}
		
		for (i = 0; i < divis.length; i++){
			System.out.print("Informe o " + (i + 1) + "o. valor do vetor de denominadores: ");
			divis[i] = input.nextInt();
		}
		
		for (i = 0; i < divis.length; i++){
			System.out.print(divis[i] + " | ");
		}
		
		// verificação dos divisores - num[i] / divis[x], num[1] / divis[x+1]...
		
		for (i = 0; i < num.length; i++) {
			int cont = 0;
			System.out.println("Numero " + num[(i)]);
			
			for (x = 0; x < divis.length; x++) {
				if (num[i] % divis[x] == 0) {
					System.out.println("Divisivel por " + divis[x] + " na posicao " + (x + 1));
					cont++;
				}
			}
		    if (cont == 0) {
				System.out.println("Nao existe divisor no vetor");
			}
		}
	}
}