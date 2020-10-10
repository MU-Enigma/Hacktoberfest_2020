def series_number(n):
    return (((n)*(n+1))/2)+1


x = int(input("Enter number for sum of series upto n"))
sum = 0
for num in range(0, x):
    sum = sum + (series_number(num)**4)


print(int(sum))
