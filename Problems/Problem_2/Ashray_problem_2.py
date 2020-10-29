i=input("Enter the number")
h=False
l=[]
w=[]
for j in i :
   w.append(j) 
if int(i)%int(j)==0:
   if j not in l:
      l.append(j)
      h=True
        
if h==True:
    print("Yes it is divisible by "+ str(l) + " in "+ i)
else:
    print("Nope, It is not divisibe by either of the numbers"+str(w))