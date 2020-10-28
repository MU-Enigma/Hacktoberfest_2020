
m=['Its monday!','Its tuesday!',"Its wednesday!","Its thursday!","Its friday!","Its saturday!","Its sunday!"]

for i in m:
    c=input("Would you like to know the day?(y/n)")
    if (c=="y"):
        n=int(input("Enter the number of the day"))
        print(m[n-1])
    elif(c=="n"):
        print("done")
        break