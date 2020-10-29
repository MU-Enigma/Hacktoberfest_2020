q=[]
s=""
normal=input("enter english text")
l=normal.split()
for i in l:
    s+=i[1:]+i[0]+"ay "
print(s)
