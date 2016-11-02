# Sum of all multiples of 5 less than 1000 and greater than 100.
# verdastelo
# ２０１６年１１月０２日

a = 100  # first term
l = 1000 # last term
d = 5 	 # difference
n = 0 	 # number of terms 

# The formula is
#   l = a + ((n - 1) * d)

n = ((l - a) / d) + 1
# print (n)

sum = (n * (a + l)) / 2
print ("Sum of all multiples of 5 between 100 and 100 is %d." %(sum))

