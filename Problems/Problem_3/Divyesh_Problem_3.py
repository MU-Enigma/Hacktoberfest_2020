print("Input 3 numbers")
a = int(input())
b = int(input())
c = int(input())
A = a*a
B = b*b
C = c*c
if A == B+C:
    print(a, b, c)
elif B == A+C:
    print(b, a, c)
elif C == A+B:
    print(c, a, b)
else:
    print("NOPE!")
