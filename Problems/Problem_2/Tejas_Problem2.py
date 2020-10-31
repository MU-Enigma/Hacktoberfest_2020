n = input("N = ")
ans = True
for i in n:
    if int(n)%int(i)==0:
        ans = True
        break
    else:
        ans = False
    
if ans == True:
    print("YES")
else:
    print("NO")