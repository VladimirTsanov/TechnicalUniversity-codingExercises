def check_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False

    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

chislo = int(input("Type a number: "))
primes_under_number = []
primes_under_number_identical = []
working_index = 0

for x in range(1, chislo):
    if check_prime(x):
        primes_under_number.append(x)
        primes_under_number_identical.append(x)

for num1 in primes_under_number:
    for num2 in primes_under_number_identical:
        if num1 + num2 == chislo:
            print(f"Yes, the number {chislo} is {num1} + {num2}")
            working_index +=1
if working_index == 0:
    print(f"No, the number {chislo} can't be written as a sum of two prime numbers")
