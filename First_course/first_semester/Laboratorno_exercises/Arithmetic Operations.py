def summation(*num):
    sum_of_numbers = sum(num)
    return sum_of_numbers
def subtraction(*num):
    res = num[0]
    for numbers in num[1::]:
        res = res - numbers
    return res
def multiplication(*num):
    res = 1
    for numbers in num:
        res = res * numbers
    return res
def division(*num):
    res = num[0]
    for numbers in num[1::]:
            res = res / numbers
    return res

print(subtraction(5, 4))
