def count_sim_rows(matrix, rows, cols):
    count = 0
    current_row = []
    sim = False # sim: similar
    for c_row in range(rows): # c_row: current row
        # copying a row into a list - selecting a row to compare
        for col in range(cols):
            current_row.append(matrix[c_row][col])
        # comparing the list with the other rows from onwards the selected row
        for row in range(c_row + 1, rows, 1):
            for col in range(cols):
                if matrix[row][col] == current_row[col]:
                    sim = True
                else:
                    sim = False
                    break
            if sim == True:
                count += 1
    return count


rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))
matrix = []
for row in range(rows):
    current_row = []
    for col in range(cols):
        value = int(input(f"Enter the element [{row}][{col}]: "))
        current_row.append(value)
    matrix.append(current_row)
print("Similar rows:", count_sim_rows(matrix, rows, cols))