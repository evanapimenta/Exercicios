# Escreva um algoritmo que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

vetor1 = []
vetor2 = []
vetor_soma = []
i = 0

while i < 10:
    value1 = int(input("Digite um valor para compor o primeiro vetor: "))
    value2 = int(input("Digite um valor para compor o segundo vetor: "))
    vetor1.append(value1)
    vetor2.append(value2)
    vetor_soma.append(value1+value2)
    i += 1

print(vetor1)
print(vetor2)
print(vetor_soma)