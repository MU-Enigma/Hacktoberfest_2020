num = int(input("Number please = "))
n = num
status = 0

while(num!=0):
    k = int(num%10)
    if(n%k == 0):
        flag = 1
        break
    num = int(num/10)
        
if status == 1:
    print("YES")
else:
    print("NO")