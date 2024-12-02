whole_number = int(input("Type an integer: "))
if whole_number.is_integer():
    numList = [int(digit) for digit in str(whole_number)]
    tuple1 = (numList)
    tuple2 = (numList[::-1])
    print(tuple1)
    print(tuple2)
else:
    print("You should input an integer value")
