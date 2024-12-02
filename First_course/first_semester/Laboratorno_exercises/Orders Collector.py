print("Welcome to our orders' collector! It can collect orders, printing the unique orders and the names of the clients")
orders = []
order_number = 0
unique_orders = []
while True:
    choice = input("Chose an option: \n"
                   "1. Add new order \n"
                   "2. Print unique orders \n"
                   "3. Print client's name by a specific order \n"
                   "4. Exit \n"
                   "Type your choice: ")
    if choice == "1":
        order_number +=1
        print("You chose to add an order")
        order_to_add = input("The new order: ")
        client_name = input("The name of the client: ")
        orders.append((order_number, client_name, order_to_add))
        print("Added successfully")
        if order_to_add.lower() not in unique_orders:
            unique_orders.append(order_to_add.lower())

    elif choice == "2":
        print("You chose to print unique orders")
        print("The unique orders so far: ", unique_orders)

    elif choice == "3":
        print("You chose to print the client's name by his/her order")
        number_to_search = int(input("Enter order number: "))
        if number_to_search <= len(orders):
            wanted_tuple = orders[number_to_search-1]
            print("The name of the client is: ", wanted_tuple[1])
        else:
            print("The list doesn't have that amount of orders. The amount is", len(orders))

    elif choice == "4":
        print("Exiting the program")
        break

    else:
        print("You must choose one from options 1 - 4!")
