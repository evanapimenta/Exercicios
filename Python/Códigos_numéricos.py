#6. Faça um programa que receba um código numérico inteiro e um vetor de cinco posições de números reais. Se o código for 0, termine o programa. Se o código for 1, mostre o vetor na ordem direta. Se for 2, mostre o vetor na ordem inversa.

vetor = []
i = 1
n = 5

num = int(input("Digite 1 ou 2 para alimentar os vetores.\n(0 para sair do programa): "))

while num != 0:
    match num:
        case 1:
            while i <= 5:
                valor = float(input(f"Digite o {i}. número para compor o vetor: "))
                vetor.insert(5, valor)
                print(vetor)
                i += 1
    
        case 2:
            while n >= 1:
                valor = float(input(f"Digite o {i}. número para compor o vetor: "))
                vetor.insert(0, valor)
                i += 1
                n -= 1
                print(vetor)
                
        case _:
            print("Valor inválido. Digite um número entre 1 e 2.")
            print("---" * 5)
            num = int(input("Digite o código númerico 1 ou 2 para continuar. Digite 0 para sair do programa: "))
    
print("Execução finalizada.")
    
