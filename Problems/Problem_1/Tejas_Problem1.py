while True:
    n = int(input("Enter a no: "))
    dict1= { 1 : "Monday",
    2:"Tuesday",
    3:"Wednesday",
    4:"Thursday",
    5:"Friday",
    6:"Saturday",
    7:"Sunday"}
    
    print(f"Thats {dict1[n]}!")
    while True:
        command = input("Another one (y/n)? ")
        if command == "y":
            break
        elif command == "n":
            print("Exiting...")
            quit()
        else:
            print(f"no {command}. Please give either a 'y'(yes) or a 'n'(no).")