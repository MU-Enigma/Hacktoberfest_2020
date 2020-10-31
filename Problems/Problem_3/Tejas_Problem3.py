x = input("Enter three numbers(a,b,c): ")
nos = list(map(int,x.split()))
a = nos[0]
b = nos[1]
c = nos[2]
if (a**2) == (b**2) + (c**2):
    print(f"{a} {b} {c}")

elif (c**2) == (a**2) + (b**2):
    print(f"{c} {a} {b}")

elif (b**2) == (c**2) + (a**2):
    print(f"{b} {c} {a}")

else:
    print("NOPE!")