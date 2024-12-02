import random
def create_matrix(rows, cols):
    matrix = []
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(random.randint(1, 1000))
        matrix.append(row)
    return matrix


def print_matrix(matrix):
    print("Matrix:")
    for row in matrix:
        print(" ".join(map(str, row)))


def column_sums(matrix):
    num_cols = len(matrix[0])
    sums = [0] * num_cols

    for row in matrix:
        for col_index, value in enumerate(row):
            sums[col_index] += value

    print("Column sums:")
    for col_index, total in enumerate(sums):
        print(f"Column {col_index + 1}: {total}")

matrix = create_matrix(3, 3)
print_matrix(matrix)
column_sums(matrix)
