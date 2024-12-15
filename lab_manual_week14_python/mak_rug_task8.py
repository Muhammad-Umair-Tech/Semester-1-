def make_rug(height, width, proc):
    rug = []
    for i in range(width):
        rug.append(proc)
    for i in range(height):
        for w in range(width):
            print(rug[w], end='')
        print()

height = int(input("Enter height: "))
width = int(input("Enter width: "))
proc = input("Enter rug character: ")
print()
make_rug(3, 5, '#')    
