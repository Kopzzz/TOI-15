import math
import random
#w = random.randint(1,201)
#h = random.randint(1,201)
w = eval(input())
h = eval(input())
d = math.sqrt(math.pow(w,2)+math.pow(h,2))
print("%d\n%d\n%.4f" %(w,h,d))
