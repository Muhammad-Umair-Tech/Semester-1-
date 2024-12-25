def is_special(numbers):
    special = False
    for index in range(len(numbers)):
        if index % 2 == 0 and numbers[index] % 2 == 0:
            special = True
        elif index % 2 != 0 and numbers[index] % 2 != 0:
            special = True
        else:
            special = False
            break
    return special


numbers = []
value = 0
while True:
    value = int(input("Enter a number (or -1 to exit): "))
    if value != -1:
        numbers.append(value)
    else:
        break
print(is_special(numbers))