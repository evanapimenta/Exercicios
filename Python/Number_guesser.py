import random

cont = 0

print("-" * 50)
print("ADIVINHADOR DE NÚMEROS")
print("-" * 50)

while cont != 10:
    random_number = random.randint(0, 10)
    user_number = input("Escolha um número: ")
    print("\nO número que você escolheu foi:", user_number)
    print("O número escolhido aleatoriamente foi:", random_number, end='\n\n')
    cont += 1

    if random_number != int(user_number):
        print("Que pena! Você errou!\n")
        if cont < 10:
            print("Você ainda tem", 10 - cont, "tentativa(s)")
        elif cont == 10:
            print("GAME OVER")
        print("-" * 50)
        continue
    elif random_number == int(user_number):
        print("Parabéns! Você acertou!\n")
        print("Você realizou", cont, "tentativa(s)")
        break
