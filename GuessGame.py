#import random
import random

#create variable
guess = 0
rand = 0

#random number
rand = random.randint(1,20)

#process and display
for count in range (1,6):
    guess = int(input("Enter the guess : "))
    if guess == rand:
        print("You guess it right!!\nThe number was %s\nYou took %s attempts."%rand%count)
        break
    elif guess>rand:
        print("Too high!")
    else:
        print("Too low!")

if guess !=rand:
    print("Not Guessed.The correct answer was : ",rand)
