def sum_of_multiplications(list1, list2):
    result_to_sum = []
    if type(list1) == list and type(list2) == list:
        if len(list1) == len(list2):
            for x in range(len(list1)):
                product = list1[x]*list2[x]
                result_to_sum.append(product)

        elif len(list1) > len(list2):
            difference1 = len(list1) - len(list2)

            for i in range(difference1):
                list2.append(list2[i])
            for x in range(len(list1)):
                product = list1[x] * list2[x]
                result_to_sum.append(product)

        elif len(list2) > len(list1):
            difference2 = len(list2) - len(list1)

            for i in range(difference2):
                list1.append(list1[i])
            for x in range(len(list1)):
                product = list1[x] * list2[x]
                result_to_sum.append(product)
    else:
        print("The function expects two lists as arguments!!!")

        print(sum(result_to_sum))

list1 = [7, 2, 3, 9]
list2 = [7, 2]
sum_of_multiplications(list1, list2)
