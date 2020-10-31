
number = int(input("Enter number"))

for digit in str(number):
    if(number % int(digit) == 0):
        print("YES")
        exit()

print("NO")
