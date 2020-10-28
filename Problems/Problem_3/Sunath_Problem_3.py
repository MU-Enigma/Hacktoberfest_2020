a=int(input("Enter integer a:"))
b=int(input("Enter integer b:"))
c=int(input("Enter integer c:"))

n=a*a
m=b*b
l=c*c

if(n==m+l):
    print(a,b,c)
elif(m==n+l):
    print(b,a,c)
elif(l==n+m):
    print(c,a,b)
else:
    print("NOPE!")