i = int(input("Enter the current year"));
temp  = i+1
count = 0
while(count<20):
    if(temp%400 == 0):
        print(temp)
        count = count +1
        temp = temp+4
    elif(temp%4 == 0 and temp%100 != 0):
        print(temp)
        count = count +1
        temp = temp+4
    else:
        temp = temp+1
        
