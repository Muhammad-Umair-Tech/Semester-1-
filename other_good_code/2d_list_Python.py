def sum_elements(matrix, rows):
    total_sum = 0
    for row in range(rows):
        for col in range(3):
            total_sum += matrix[row][col]
    return total_sum


rows = int(input("Enter the number of rows (the number of columns is always 3): "))
matrix = []
value = 0
for row in range(rows):
    current_row = []
    for col in range(3):
        value = int(input(f"Enter element [{row}][{col}]: "))
        current_row.append(value)
    matrix.append(current_row)
print("Sum of the elements is: ", sum_elements(matrix, rows))