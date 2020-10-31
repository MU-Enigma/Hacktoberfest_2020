word = input("Enter string: ")
words = word.split()
for i in words:
    print("Pig Latin: " +i[1].upper()+i[2:len(i)] + i[0].lower()+"ay",end = " ")