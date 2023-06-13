# Faça um programa que carregue um vetor com dez números inteiros. Calcule e mostre os números superiores a 50 e suas respectivas posições. Mostrar mensagem se não existir nenhum número nesta condição.

vetor = []
acima_50 = []
i = 1

while i <= 10:
    valor = int(input(f"Digite o {i}. número para compor o vetor: "))
    vetor.append(valor)
    i += 1
    if valor > 50:
        acima_50.append(valor)
        print(f"Número {valor} superior a 50 na posição {i}.")
        
if not acima_50:
    print("Nenhum número superior a 50.")

print("Fim da execução")