def find_largest_col_index(matrix, rows, cols):
    sums = []
    for col in range(cols):
        total_sum = 0
        for row in range(rows):
            total_sum += matrix[row][col]
        sums.append(total_sum)
    return sums.index(max(sums))


def move_col(matrix, rows, cols):
    largest_col_index = find_largest_col_index(matrix, rows, cols)
    new_matrix = []
    for row in range(rows):
        current_row = [matrix[row][largest_col_index]]
        for col in range(cols):
            if col != largest_col_index:
                current_row.append(matrix[row][col])
        new_matrix.append(current_row)
    return new_matrix




rows = int(input("Enter the number of rows: "))
cols = 5
matrix = []
for row in range(rows):
    current_row = []
    for col in range(cols):
        value = int(input(f"Enter the element [{row}][{col}]: "))
        current_row.append(value)
    matrix.append(current_row)
changed_matrix = move_col(matrix, rows, cols)
# printing the changed matrix
for row in range(rows):
    for col in range(cols):
        print(changed_matrix[row][col], " ", end="")
    print("\n")

