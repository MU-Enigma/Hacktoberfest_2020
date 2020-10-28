

print("Enter three numbers(a,b,c): ")
a , b , c = map(int , input().split())

if(a*a == (b*b + c*c)):
    print(a , b , c)

elif(b*b == (a*a + c*c)):
    print(b , a , c)
    
elif(c*c == (a*a + b*b)):
    print(c , a , b)
    
else:
    print("NOPE !")





