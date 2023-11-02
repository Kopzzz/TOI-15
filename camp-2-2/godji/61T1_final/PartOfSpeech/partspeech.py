pronoun = ['he','she','it','you','we','i','they','him','her','us','me','them']
n = eval(input())
for i in range(n):
    s = input()
    if (s.lower() in pronoun):
        print("YES")
    else:
        print("NO")
