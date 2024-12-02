def check_perfect_num(number):
    if number < 2:
        return False
    number_divider = []
    for x in range(1, number):
        if number % x == 0:
            number_divider.append(x)
    return number == sum(number_divider)

numbers = [6, 41, 28, 14, 89, 90, 23, 1]

for num in numbers:
    if check_perfect_num(num):
        print(f"The number {num} is perfect")
