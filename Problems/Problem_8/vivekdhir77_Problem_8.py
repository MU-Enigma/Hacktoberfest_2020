word = input()
ans = True
length = len(word)
if length % 2 == 0:
    string=""
    pal1 = list(word[0:(length//2)])
    pal1.reverse()
    pal2 = list(word[length//2:])
    if pal1 == pal2:
        ans = True
    else:
        ans = False
    
else:
    pal1 = list(word[0:(length//2)+1])
    pal1.reverse()
    pal2 = list(word[length//2:])
    if pal1 == pal2:
       ans = True
    else:
        ans = False


if ans == True:
    print("Yes")
else:
    print("No")
