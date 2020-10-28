flag=0
flag2=0
while flag==0:
    val=int(input("Please enter a number:"))
    if val==1:
        print("That's Monday!")
    elif val==2:
        print("That's Tuesday!")
    elif val==3:
        print("That's Wednesday!")
    elif val==4:
        print("That's Thursday!")
    elif val==5:
        print("That's Friday!")
    elif val==6:
        print("That's Saturday!")
    elif val==7:
        print("That's Sunday!")
    else:
        print("Invalid input. You must enter a number from 1-7 :)")
        continue
    while flag2==0:
        question=input("Do you want to try again?")
        if question=="y":
            "Great!"
            break
        elif question=="n":
            print("Goodbye!")
            flag=1
            break
        else:
            print("I don't understand what you mean. Please enter y(yes) or n(no) only :)")
            continue