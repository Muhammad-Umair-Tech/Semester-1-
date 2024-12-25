def is_identity_matrix(matrix, rows):
    cols = rows
    error_found = False
    for row in range(rows):
        for col in range(cols):
            if col == row:
                if matrix[row][col] != 1:
                    error_found = True
                    break
            else:
                if matrix[row][col] != 0:
                    error_found = True
                    break
        if error_found == True:
            break
    return not error_found


rows = int(input("Enter the number of rows: "))
cols = rows
matrix = []
for row in range(rows):
    current_row = []
    for col in range(cols):
        value = int(input(f"Enter the element [{row}][{col}]: "))
        current_row.append(value)
    matrix.append(current_row)
print(is_identity_matrix(matrix, rows))
for row in range(rows):
    for col in range(cols):
        print(matrix[row][col], " ", end="")
    print("\n")