days = {1:"Monday", 2:"Tuesday", 3:"Wednesday", 4:"Thursday", 5:"Friday", 6:"Saturday", 7:"Sunday"}
n = int(input("enter number:"))
if n<8 and n>0:
    print("Thats {}!".format(days[n]))
else:
    print("number not in between (1-7)")
    
while(1):
    x = input("another one(y/n)?")
    if x=="n":
        print("Exiting...")
        break
    elif x=="y":
        n = int(input("enter number:"))
        if n<8 and n>0:
            print("Thats {}!".format(days[n]))
        else:
            print("number not in between (1-7)")  
    else:
        print('no "{}". Please give either a \'y\'(yes) or a \'n\'(no).'.format(x))