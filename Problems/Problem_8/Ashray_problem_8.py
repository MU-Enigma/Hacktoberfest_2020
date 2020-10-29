q=""
s=input("Enter the string")
k=len(s)
for i in range(-1,-k-1,-1):
    q+=s[i]
if q==s:
  print("It is a palindrome")
else:
  print("No it is not a palindrome")
    
