print("Welcome to your To-Do list! You can add, remove, see all tasks and check for certain task. Just follow the instructions below:")
to_do_list = []
while True:
    command = input("You have to choose an action: \n"
          "1. Add a task \n"
          "2. Remove a task by number \n"
          "3. See all tasks \n"
          "4. Search in the to do list by number of the task: \n"
          "5. Exit the list \n"
          "Enter your choice: ")

    if command == "1":
        print("You chose to add a task")
        to_do_list.append(input("Type the task: "))

    elif command == "2":
        print("You chose to remove a task by a number")
        task_num = int(input("Type a number of the task(the first task is 0 and so on): "))
        to_do_list.pop(task_num)

    elif command == "3":
        print("You chose to see all tasks so far")
        print(to_do_list)
    elif command == "4":
        print("You chose to search in the list by number")
        task_num_search = int(input("Type the index of a task(the first is 0 and so on): "))
        if task_num_search in range(len(to_do_list)):
            print(f"The task is: ", to_do_list[task_num_search])
        else:
            print("The task is not in the list")
    elif command == "5":
        print("Exiting the program")
        exit()
    else:
        print("You have to choose one of the options")
