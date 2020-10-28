while(1==1):

  print("Enter The Number of the Day you want to see.")
  i = int(input())
  if i == 1:
    print("The Day is Monday.")
  elif i == 2:
    print("The Day is Tuesday.")
  elif i == 3:
    print("The Day is Wednesday.")
  elif i == 4:
    print("The Day is Thursday.")
  elif i == 5:
    print("The Day is Friday.")
  elif i == 6:
    print("The Day is Saturday.")
  elif i == 7:
    print("The Day is Sunday.")
  else:
    print("Please Select a number between 1-7")
  print("Would you like to try again? Enter 'y' or 'n'")
  a = input()
  if a == "n":
    print("Thank you for using my program")
    break
  