import math
a = eval(input())
b = eval(input())
c = eval(input())
t = b**2 - 4*a*c
if (t>=0.0) :
    ans1 = (-b+math.sqrt(t))/(2*a)
    ans2 = (-b-math.sqrt(t))/(2*a)
    print("ans:%.2f,%.2f"%(ans1,ans2))
else:
    print("No Answer!!!")
    
