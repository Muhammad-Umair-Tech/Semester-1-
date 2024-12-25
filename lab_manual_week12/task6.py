def effect(arena, coords):
    row = string_coord_to_int(coords[0])
    col = int(coords[1])
    if arena[row][col] == ".":
        return "Splash"
    elif arena[row][col] == "*":
        return "BOOM"
    

def string_coord_to_int(coord):
    num = 0
    if coord == "A":
        num = 0
    elif coord == "B":
        num = 1
    elif coord == "C":
        num = 2
    elif coord == "D":
        num = 3
    elif coord == "1":
        num = 0
    elif coord == "2":
        num = 1
    elif coord == "3":
        num = 2
    elif coord == "4":
        num = 3
    return num


arena = [ 
    [".", ".", ".", "*", "*"], 
    [".", "*", ".", ".", "."], 
    [".", "*", ".", ".", "."], 
    [".", "*", ".", ".", "."], 
    [".", ".", "*", "*", "."] 
]
coords = input("Enter coordinates: ").upper()
print(effect(arena, coords)) 