def and_fn():
    x = int(input('Enter value of 1: '))
    y = int(input('Enter value of 2: '))

    if (x == 0) or (y == 0):
        result = 0
    else:
        result = 1

    print ("Result: " + str(result))

def or_fn():
    x = int(input('Enter value of 1: '))
    y = int(input('Enter value of 2: '))

    if x == 1 or y == 1:
        result = 1
    else:
        result = 0

    print ("Result: " + str(result))

def not_fn():
    x = int(input('Enter the value: '))

    if x == 1:
        x = 0
    else:
        x = 1

    print ("Result: " + str(x))

def nor_fn():
    x = int(input('Enter value of 1: '))
    y = int(input('Enter value of 2: '))

    if x == 0 or y == 0:
        result = 1
    else:
        result = 0

    print ("Result: " + str(result))


while True:
    choice = int(input('1. And function\n2. Or function\n3. Not function\n4. Nor function'))

    if choice == 1:
        and_fn()
    elif choice == 2:
        or_fn()
    elif choice == 3:
        not_fn()
    elif choice == 4:
        nor_fn()
    else:
        print("Wrong option selected!")