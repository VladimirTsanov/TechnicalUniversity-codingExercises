def dictionary():
    print("English-Bulgarian Dictionary")
    ang_bg_dict = {"apple" : "ябълка",
                   "umbrella" : "чадър",
                   "sky" : "небе",
                   "house" : "къща"}
    print(ang_bg_dict)
    while True:
        choice = input(
            "Available operations: \n"
            "1: Add a word to the dictionary \n"
            "2: Search for a word \n"
            "3: Print the entire content of the dictionary \n"
            "4: Delete a word from the dictionary \n"
            "Enter 'exit' to exit \n"
            "Choose an operation: "
            )
        if choice == "1":
            word_to_add = input("Enter the word in English to add: ")
            bgword_to_add = input("Enter the Bulgarian translation of this word to fully add: ")
            ang_bg_dict[word_to_add] = bgword_to_add
            print("The dictionary has been updated: ", str(ang_bg_dict))
        elif choice == "2":
            word_search = input("Enter a word to search: ")
            if word_search in ang_bg_dict:
                print("The word exists in the dictionary: " + word_search + " - " + ang_bg_dict[word_search])
            else:
                print("The word is not in the dictionary.")
        elif choice == "3":
            print(ang_bg_dict)
        elif choice == "4":
            word_search = input("Enter a word to search: ")
            if word_search in ang_bg_dict:
                del ang_bg_dict[word_search]
                print("The word has been deleted from the dictionary")
            else:
                print("The word is not in the dictionary.")
        elif choice == 'exit':
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Try again.")
dictionary()
