def num_length(num):
    count = 0
    q = num
    while q != 1:
        q //= 10
        count += 1
    count += 1 # counting when q == 1
    return count


num = int(input("Enter a number: "))
print(f"The number of digits in {num} is {num_length(num)}")