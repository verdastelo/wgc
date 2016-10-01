print ("Welcome!") # to print a welcome message
g = input ("Guess the number: ") # prompts the user to enter a number, when entered, stores the number
guess = int(g) # stores the entered number in memory and gives it the name guess
if guess == 5: # if the guess turns out to be 5
  print ("You win!") #  prints "You win!"
else: # otherwise
  print ("You love!") #  prints "You lose."
print ("Game over!")

