n = input("N = ")
n = int(n)
f_n = n
result = "NO"

while (f_n>0) :
    rem = f_n%10
    if(rem == 0):
        f_n = int(f_n/10)
        continue
    elif(n%rem == 0):
        result = "YES"
        break
    f_n = int(f_n/10)

print(result)

