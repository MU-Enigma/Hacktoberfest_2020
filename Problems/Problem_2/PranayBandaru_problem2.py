import math
i = int(input("Enter a number to check if it is divisible by any of it's digits"))
c = 0
k = i
check = 0
while(c < math.ceil(math.log(i))):
    rem = k%10
    if(rem != 0):
        if(i%rem == 0):
            print("YES")
            check = 1
            break
        k = int(k/10)
    c = c + 1
if(check == 0):
    print("NO")
    

    	