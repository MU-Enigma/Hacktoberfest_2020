str = input("Enter string: ")
i=0
result = False
while(i<int(len(str)/2)):
    if str[i].lower() == str[len(str)-i-1].lower():
        result = True
    else:
        result = False
        break
    i = i+1

if result:
    print(f"{str} is palindrome")
else:
    print(f"{str} is not palindrome")