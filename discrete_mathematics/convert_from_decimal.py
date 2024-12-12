def convert(num, base):
    q = num
    index = 0
    size = times_divided(num, base)
    converted = [0] * size
    while q != 0:
        if q % base == 10:
            value = "A"
        elif q % base == 11:
            value = "B"
        elif q % base == 12:
            value = "C"
        elif q % base == 13:
            value = "D"
        elif q % base == 14:
            value = "E"
        elif q % base == 15:
            value = "F"
        else:
            value = q % base
        converted[size - 1 - index] = value
        q //= base
        index += 1
    return converted


def times_divided(num, base):
    q = num
    count = 0
    while q != 0:
        q //= base
        count += 1
    return count


num = int(input("Enter a number: "))
base = int(input("Enter base to convert into: "))
converted = convert(num, base)
size = times_divided(num, base)
for i in range(0, size):
    print(converted[i], end="")
