y_n=""
while True:
    dayno=int(input('enter number: '))
    if dayno == 1:
        print("Thats Monday!")
    elif dayno == 2:
        print("Thats Tuesday!")
    elif dayno == 3:
        print("Thats Wednesday!")
    elif dayno == 4:
        print("Thats Thursday!")
    elif dayno == 5:
        print("Thats Friday!")
    elif dayno == 6:
        print("Thats Saturday!")
    elif dayno == 7:
        print("Thats Sunday!")
    while True:
        y_n=input('another one(y/n)? ')
        if y_n == "n":
            print("exiting...")
            break
        elif y_n == "y":
            break
        else:
            print(f'no "{y_n}". Please give either a "y"(yes) or a "n"(no).')
    if y_n == "n":
        break
    elif y_n == "y":
        continue
    
