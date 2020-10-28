a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
c=int(input("Enter the third number:"))
if c**2==(a**2 + b**2):
    print(c,",",b,",",a)
elif b**2==(a**2 + c**2):
    print(b,",",a,",",c)
elif a**2==(c**2 + b**2):
    print(a,",",b,",",c)
else:
    print("Nope!")