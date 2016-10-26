# This is a very simple number guessing game.

print ("Welcome!")					# Welcomes a gamer.
g = input("Guess a number between 1 and 10: ")		# Asks him to guess a number between 1 and 10.
guess = int(g)						# Turns the guess into an int.
while (g != 5): 					# While the guess is not equal to 5, execute this block.
  if (g > 5):						# Display the message in the next line if the guess is greater than 5.
    print ("Your guess is higher.")  			# 
    g = input ("Guess again! Your number: ")
  else:
    if (g < 5):
      print ("Your guess is lower.")
      g = input ("Guess again! Your number: ")
    else:
      print ("You guessed 5. Congraulations.")
print ("You win!")
