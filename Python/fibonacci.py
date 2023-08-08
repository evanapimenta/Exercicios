def fib(x):
    a = 0
    b = 1
    result = None

    for i in range(n):
        result = b + a
        a = b
        b = result
        print(f"{result}", end=' ')

    return result


while True:
    prompt = input("How many items would you like your Fibonacci sequence to have? ")
    if not prompt.isnumeric() or int(prompt) <= 0:
        print("Invalid input. Try again.")
    else:
        n = int(prompt)
        fib(n)
        print()
    print("=" * 60)
