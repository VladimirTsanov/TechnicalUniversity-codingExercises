import  random
Row = int(input("Enter the number of rows:"))
Column = int(input("Enter the number of columns:"))
matrix = []
for row in range(Row):
    a = []
    for column in range(Column):
        a.append(random.randint(10,100))
    matrix.append(a)

for row in range(Row):
    for column in range(Column):
        print(matrix[row][column], end=" ")
    print()
  
delete_row = int(input("delete a row number: "))
delete_column = int(input("delete a column number: "))

matrix.pop(delete_row-1)
for i in matrix:
    i.pop(delete_column-1)

for row in range(Row - 1):
    for column in range(Column - 1):
        print(matrix[row][column], end=" ")
    print()
