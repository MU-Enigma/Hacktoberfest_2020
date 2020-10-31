i = str(input("Enter a String to check if it is a palindrome "))
l = len(i)
k = 0
check = 0
while(k < l/2):
    if(i[k] != i[l-k-1]):
        print(i + " is not a palindrome")
        check = 1
        break;
    else:
        k= k +1
        continue
if(check == 0):
    print(i+ " is a palindrome")
    
