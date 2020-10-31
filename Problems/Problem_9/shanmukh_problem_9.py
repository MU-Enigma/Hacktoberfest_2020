s = ""
text = input("Enter ur txt : ")
l = text.split()
for i in l:
    s+=i[1:]+i[0]+"ay "
print(s)