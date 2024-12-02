print("Dictionary creation via list")
numbers = []
dic_numbers = {}
whole_number = int(input("Enter a whole number: "))
for x in range(1, whole_number+1):
    numbers.append(x)

reversed_list = sorted(numbers, reverse=True)

for number in numbers:
    dic_numbers[number] = reversed_list[number-1]
print(dic_numbers)
