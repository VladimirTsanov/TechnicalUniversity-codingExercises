print("Number Operations: (You can input up to 10 integer numbers)")

positive_numbers_count = 0
sum_positive_numbers = 0
sum_negative_numbers = 0
negative_numbers_count = 0
zero_count = 0
numbers_bigger_than10 = 0

while True:
    for x in range(10):
        number = int(input("Input a integer number (type '-1' for exit): "))

        if number > 0:
            if number%2 == 0:
                print("The number is positive and even")
            else:
                print("The number is positive and odd")
            if number > 10:
                numbers_bigger_than10 += 1
            positive_numbers_count += 1
            sum_positive_numbers += number

        elif number == -1:
            if positive_numbers_count == 0:
                print(
                    f"The average of the positive numbers: 0 and of the negatives: {sum_negative_numbers / negative_numbers_count:.2f}")
            elif negative_numbers_count == 0:
                print(
                    f"The average of the positive numbers: {sum_positive_numbers/positive_numbers_count:.2f} and of the negatives: 0")
            print(f"The positive numbers are {positive_numbers_count}, the negative are: {negative_numbers_count} and there are {zero_count} zeros")
            print("Positive numbers bigger than 10 are: ", numbers_bigger_than10)
            exit()

        elif number < 0:
            if number%2 == 0:
                print("The number is negative and even")
            else:
                print("The number is negative and odd")
            negative_numbers_count += 1
            sum_negative_numbers += number

        elif number == 0:
            print("The number is zero")
            zero_count += 1

        else:
            print("Type an integer value")

    print(f"The positive numbers are {positive_numbers_count}, the negative are: {negative_numbers_count} and there are {zero_count} zeros")
    print("Positive numbers bigger than 10 are: ", numbers_bigger_than10)
    if positive_numbers_count == 0:
        print(
            f"The average of the positive numbers: 0 and of the negatives: {sum_negative_numbers / negative_numbers_count:.2f}")
    elif negative_numbers_count == 0:
        print(
            f"The average of the positive numbers: {sum_positive_numbers / positive_numbers_count:.2f} and of the negatives: 0")
    break
