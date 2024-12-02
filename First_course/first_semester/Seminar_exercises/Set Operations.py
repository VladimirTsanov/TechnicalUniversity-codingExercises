import random
def mnojestva(number):
    if not isinstance(number, int) or number <= 0:
        print("Input a whole positive number!!!")
        return

    set1 = set(random.randint(-100, 100) for x in range(number))
    set2 = set(random.randint(-100, 100) for x in range(number))

    print(f"Set 1 is: {set1}")
    print(f"Set 2 is: {set2}")

    while True:
        choice = input(
            "Possible operations: \n"
            "1: Check the lenght of the two sets \n"
            "2: Merge the sets \n"
            "3: Difference of the sets \n"
            "4: Crossing the sets \n"
            "5: Removing a chosen element from the first set \n"
            "6: Clear the sets \n"
            "0: Exit \n"
            "Please, choose an option number: "
        )

        if choice == '1':
            print("Lenght of set 1 is: ", len(set1))
            print("Lenght of set 2 is: ", len(set2))

        elif choice == '2':
            combined_set = set1 | set2
            print("Merged set: ", combined_set)

        elif choice == '3':
            difference = set1 - set2
            print("The difference between the sets (elements in the first but not in the second) is: ", difference)

        elif choice == '4':
            intersection = set1 & set2
            if intersection:
                print("The crossing of sets is: ", intersection)
            else:
                print("There are no common elements between sets")

        elif choice == '5':
            try:
                element_to_remove = int(input("Type the item you want to remove from the first set: "))
                if element_to_remove in set1:
                    set1.remove(element_to_remove)
                    print(f"The element {element_to_remove} was removed from set 1")
                else:
                    print("The element is not in the set")
            except ValueError:
                print("Please enter a valid whole number")

        elif choice == '6':
            set1.clear()
            set2.clear()
            print("The sets are cleared!")

        elif choice == '0':
            print("Exiting the program!")
            break

        else:
            print("Invalid choice. Please, try again!")
