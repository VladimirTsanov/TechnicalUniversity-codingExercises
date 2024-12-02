def area_square(a):
    return a*a
def area_rectangle(a, b):
    return a * b
def area_triangle(a, b):
    return a*b/2
def isosceles_triangle(a, b, h):
    return a*h/2
def find_area(type_of_figure, *sides):
    if type_of_figure == "rectangle":
        if sides[0] != sides[1]:
            print(area_rectangle(sides[0], sides[1]))
            print(sides)
        else:
            print(f"This is a square with area {area_square(sides[0])}")
    elif type_of_figure == "square":
        print(area_square(sides[0]))
    elif type_of_figure == "right triangle" or type_of_figure == "triangle":
        if sides[0] != sides[1]:
            print(area_triangle(sides[0], sides[1]))
        else:
            height = float(input("Isosceles triangle. Please input the height forwarding to that side: "))
            print(f"The area of the isosceles triangle is {isosceles_triangle(sides[0], sides[1], height)}")
find_area("triangle", 4, 4)
