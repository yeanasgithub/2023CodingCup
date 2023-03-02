#
# Students will be given the code below.
# It displays never-ending strings 4-characters long.
#
# The students will fix is so that...
#   1. It stops printing the strings.
#   2. If the string equals "CSUB"
#      Print the string. 
#      Show how many tries it took to find the "CSUB" string.
#
# The winner is the student who calls out the number of tries
# before other students find it.
#
import string
import random
 
random.seed(25)
while (1):
	word = ''.join(random.choices(string.ascii_uppercase, k=4))
	print(word)

