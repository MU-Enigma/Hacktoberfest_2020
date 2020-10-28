print("Enter 3 Numbers")
a = input()
b = input()
c = input()
a = int(a)
b = int(b)
c = int(c)
a2 = a*a
b2 = b*b
c2 = c*c
ansa = b2+c2
ansb = a2+c2
ansc = a2+b2
if a2 == ansa:
  print(a,b,c)
elif b2 == ansb:
  print(b,a,c)
elif c2 == ansc:
  print(c,a,b)
else:
  print("NOPE!")