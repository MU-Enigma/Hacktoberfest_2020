entry=list(input("Enter three numbers(a,b,c): ").split())
entry= list(map(int, entry))
a= entry[0]
b= entry[1]
c= entry[2]
if (a*a)== ((b*b)+(c*c)):
    print(f'{a} {b} {c}')
elif (b*b)== ((a*a)+(c*c)):
    print(f'{b} {a} {c}')
elif (c*c)== ((b*b)+(a*a)):
    print(f'{c} {a} {b}')
else:
    print("NOPE!")
