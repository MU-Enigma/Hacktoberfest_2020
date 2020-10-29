d={1:"Monday", 2:"Tuesday",3:"Wednesday",4:"Thursday",5:"Friday",6:"Saturday",7:"Sunday"}
def Main():
    try:
     i=int(input("Enter the day of week"))
     if i in d.keys():
        print("Its a "+d[i]+"!")
     else:
         print("Sorry, that's an invalid input!")
    except ValueError:    
        print("Sorry, that's an invalid input!")
Main()
while True:
    j=input("Do you want to play again?(y/n)")
    if j=="n":
        print("Bye!")
        break
    elif j=="y":
        Main()
    else:
        print("hmm I don't really follow what you have just written")

    