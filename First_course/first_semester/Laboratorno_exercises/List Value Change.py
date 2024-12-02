def change_list_values(list1, num):
    if type(list1) == list and type(num) == int or type(num) == float:
        for x in range(len(list1)):
            if list1[x] > num:
                list1[x] = 0
    print("The list is now:", list1)

num_list = [32, 10, 9, 2, 1, 78, 55]
change_list_values(num_list, 10)
