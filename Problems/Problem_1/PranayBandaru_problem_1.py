
arr = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
i = 'y'
while(i == 'y'):
    n = int(input("Enter the number of the day in a week"))
    if(n>0 and n<8):
        print("That's a "+arr[n-1]+"!")
    else:
        print("Oops that's not valid")
    i = input("Another one(y/n)?")
    if(i == 'n'):
        print("Exiting...")
        break
    elif(i == 'y'):
        continue
    else:
        while(i != 'n' and i != 'y'):
            print("No " + i + " Please enter 'y' for a Yes and 'n' for No")
            i = input("Another one(y/n)?")
    if(i == n):
        print("Exiting...")
        break
    else:
        continue
        
            

