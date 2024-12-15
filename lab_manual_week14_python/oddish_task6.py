def is_oddish(num):
    sum = 0
    qoutient = num
    while qoutient != 0:
        sum += (qoutient % 10)
        qoutient //= 10
            
    if sum % 2 == 0:
        return False
    else:
        return True
    

num = int(input("Enter a number: "))
oddish = is_oddish(num)
if oddish == True:
    print("Oddish") 
else:
    print("Evenish")
