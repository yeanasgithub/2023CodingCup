#
# ring.py for coding cup 2023
# Author: Gordon Griesel
#
# Usage: python3 ring.py <radius>
#
# Displays a ring of characters
# Fills a ring between radius r1 and r2
# r1 is small radius squared
# r2 is large radius squared
#
#This import is needed for command-line arguments.
import sys

rad = 8 # radius defaults to 8
n = len(sys.argv)
if (n > 1):
    rad = int(sys.argv[1] )   
dim = rad * 2 + 1
#Save the radii squared so no square-root is needed for distance calculation.
#Extra points for a student who knows this.
r1 = (rad*2.0/3.0) * (rad*2.0/3.0)
r2 = rad * rad
i = dim
while (i > 0):
    j = dim
    while (j > 0):
        dx = j - rad - 1
        dy = i - rad - 1
        dist = dx*dx + dy*dy
        if ((dist > r1) and (dist < r2)):
            print("##", end="")
        else:
            print("..", end="")
        j -= 1
    print("");        
    i -= 1
