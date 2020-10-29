try:
    x = int(input('Enter the value :'))
    sum = 0
    if x<0:
        print('You Have Entered Negative Number')
    else:
        for count in range(0, x+1, 1):
            sum = sum+count

        print('sum = ' + str(sum))
except:
    print('Input Type Error!')