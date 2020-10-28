current=int(input("Enter the current year:"))
i=1
while(i<21):
    if current%4==0:
        print(current)
        current+=4
    elif current%4==1:
        current+=3
        print(current)
        current+=4
    elif current%4==2:
        current+=2
        print(current)
        current+=4
    elif current%4==3:
        current+=1
        print(current)
        current+=4
    i+=1
    