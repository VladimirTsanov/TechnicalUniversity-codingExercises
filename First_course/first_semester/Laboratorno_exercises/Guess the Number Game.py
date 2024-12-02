import random

print("Game: guess the number")
random_number = random.randint(1, 100)
print("The computer generated a random integer number from 1 to 100. You must guess it. You have 7 attempts")
while True:
    for n in range(7):
        guess = int(input("Please enter your choice: "))
        if guess == random_number:
            print("Congratulations! You guessed the number.")
            exit()
        elif guess != random_number:
            if random_number > guess:
                print("The number is higher")
            elif random_number < guess:
                print("The number is lower")
        else:
            print("You should input a integer")
