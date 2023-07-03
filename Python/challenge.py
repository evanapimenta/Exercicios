options = ["Learn Python", "Learn Java", "Go swimming", "See a movie", "Have dinner", "Go to Bed", "Exit"]


def list_options():  # Aqui eu tentei usar o enumerate com start=1, mas na hora de chamar o índice não tava dando certo.
    index = 1
    for option in options:
        print("{0}. \t{1}".format(index, option))
        index += 1


print("Choose one of the above options:")
list_options()
choice = int(input())

while choice != 7:
    while choice <= 0 or choice > 7:
        print("Invalid option. Please choose another.")
        list_options()
        choice = int(input())
    print("You typed {0} - {1}".format(choice, options[choice - 1]))
    choice = int(input("Choose another option: "))
else:
    print("End of execution")
