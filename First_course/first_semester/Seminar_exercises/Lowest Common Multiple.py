def lowest_divider(num1, num2):
    dividers_num1 = []
    dividers_num2 = []
    numbers_dividers = []
    for i in range(1, num1+1):
        if num1 % i == 0:
            dividers_num1.append(i)
    for n in range(1, num2+1):
        if num2 % n == 0:
            dividers_num2.append(n)

    for num in dividers_num1:
        if num in dividers_num2:
            numbers_dividers.append(num)
    gcd = max(numbers_dividers)
    lcm = (num1 * num2) // gcd
    print(lcm)

lowest_divider(12, 16)
