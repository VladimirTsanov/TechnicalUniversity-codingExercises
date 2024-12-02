def is_palindrome(number):
    number_digits = []
    number_str = str(number)

    for digit in number_str:
        number_digits.append(digit)

    if number_digits == number_digits[::-1]:
        print(1)
    else:
        print(0)
        
is_palindrome(33)
