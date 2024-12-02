def pascal_triangle(num):
        triangle = []

        for i in range(num):
            row = [1]  # Всеки ред започва с 1
            if i > 0:
                for j in range(1, len(triangle[-1])):
                    row.append(triangle[-1][j - 1] + triangle[-1][j])
                row.append(1)
            triangle.append(row)

        return triangle

def print_pascal(triangle):
    max_width = len(" ".join(map(str, triangle[-1])))
    for row in triangle:
        print(" ".join(map(str, row)).center(max_width))

num = 6
triangle = pascal_triangle(num)
print_pascal(triangle)
