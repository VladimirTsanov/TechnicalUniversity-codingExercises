class TriangleChecker:
    def __init__(self, side_a, side_b, side_c):
        self.side_a = side_a
        self.side_b = side_b
        self.side_c = side_c

    def is_triangle(self):
        if not all(isinstance(side, (int, float)) for side in (self.side_a, self.side_b, self.side_c)):
            print("You should input onlu numbers!")
        elif self.side_a <= 0 or self.side_b <= 0 or self.side_c <= 0:
            print("A triangle cannot have sides with negative values!")

        elif (self.side_a + self.side_b > self.side_c and
            self.side_a + self.side_c > self.side_b and
            self.side_b + self.side_c > self.side_a):
            print("Yeah, this triangle is possible!")
        else:
            print("You can't make a triangle with this side values!")


triangle = TriangleChecker(7, 9, 10)
triangle.is_triangle()
