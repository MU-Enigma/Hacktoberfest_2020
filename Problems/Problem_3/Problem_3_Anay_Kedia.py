print("input 3 numbers a,b,c")
a=int(input())
b=int(input())
c=int(input())

p=a*a
q=b*b
r=c*c

if p==q+r:
    print(a,b,c)
elif q==p+r:
    print(b,a,c)
elif r==p+q:
    print(c,a,b)
else:
    print("Nope!")