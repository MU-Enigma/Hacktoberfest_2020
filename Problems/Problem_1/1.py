arr = [1,2,3,4,5,6,7]
days = ["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
alternate_input = ["another one(y/n)?"]

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
    if n in arr:
        print(f"That's {days[n-1]}!")
    else:
        print("Number has to be in between 1 and 7. To give a different input press 'y' next")

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
    

        
    

