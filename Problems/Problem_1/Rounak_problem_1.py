ar = ["Monday", "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"]
response = "y"

def getresponse():
    response = input("another one(y/n)")
    if response == "y" or response == "n":
        return response
    else:
        print("no \"" , response ,"\". Please give either a 'y'(yes) or a 'n'(no). " )
        getresponse()


while response is not "n":

    day = input("enter Number : ")
    day = int(day)
    if(day < 1 or day >7):
        print("Wrong number of day ... Try Again")
        response = "y"
        continue


    print("That's " , ar[(day-1)] , "!\n")
    
    response = getresponse()

print("Exiting...")





