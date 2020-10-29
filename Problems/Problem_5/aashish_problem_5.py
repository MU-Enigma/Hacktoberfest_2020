while (1==1):
  print("Enter a Number")
  n = input()
  n = int(n)
  a = 1
  z = 12
  m = 1
  m = int(m)
  while a <= z:
    m = n*a
    print(n,"*",a,"=",m)
    a += 1
  print("Would you like to try again?(y/n)")
  ans = input()
  if ans == "n":
    break
  elif ans == "y":
     continue
  else:
     print("Please choose between (y/n)")
     break
    
    
