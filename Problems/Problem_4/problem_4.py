# take input from user for number of rows to be printed
print("Enter the value of n: ")
n = int(input())

for i in range(1, n+1):         # outer loop for each row
    for j in range(1, i+1):     # inner loop for each number in a row
        print(j, end=" ")       # print the number
    print("\n")                 # print new line

