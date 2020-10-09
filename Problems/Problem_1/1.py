days = ["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
alternate_input = ["another one(y/n)?","another one(y/n)? i guess?"]

final_d = True

def decision(d):
    if d == 'y':
        return 1
    elif d == 'n':
        return 0
    else:
        return 2

while(True):
    n = input ("Enter number :")
    n = int(n)
    if n==1:
        print(f"That's {days[n-1]}!")
    elif n==2:
        print(f"That's {days[n-1]}!")
    elif n==3:
        print(f"That's {days[n-1]}!")
    elif n==4:
        print(f"That's {days[n-1]}!")
    elif n==5:
        print(f"That's {days[n-1]}!")
    elif n==6:
        print(f"That's {days[n-1]}!")
    elif n==7:
        print(f"That's {days[n-1]}!")

    while True:
        inp = input(f"{alternate_input[0]}")
        if decision(inp) == 1:
            final_d = True
            break
        elif decision (inp) == 0:
            final_d = False
            break
        else:
            print(f"no '{inp}'. Please give either a 'y'(yes) or a 'n'(no). ")
            continue


    if final_d == True:
        continue
    else: 
        print("Exiting...")
        break
    

        
    

