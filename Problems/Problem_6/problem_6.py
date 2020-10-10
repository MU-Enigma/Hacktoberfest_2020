# Program to print the next 20 leap years
current_year = 2020

years = 0   # initialise number of years found as leap

print("The next 20 leap years are: ")
while years < 20:
    current_year += 1
    if current_year % 4 == 0:   # if the year is leap
        print(current_year)
        years += 1
