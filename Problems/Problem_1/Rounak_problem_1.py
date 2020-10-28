#!/usr/bin/env python
# coding: utf-8

# In[11]:


ar = ["Monday", "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"]
response = "y"

def getresponse():
    response = input("another one(y/n)")
    
    if response == "y" or response == "n":
        
        return response
    else:
        print("no \"" , response ,"\". Please give either a 'y'(yes) or a 'n'(no). " )
        return getresponse()


while response is not "n" :
    day = int(input("enter Number : "))
    
    if(day < 0 or day >7):
        print("Wrong number of day ... Try Again")
        response = "y"
        continue


    print("That's " , ar[day-1] , "! \n")
    
    response = getresponse()
    print(response)
    


print("Exiting...")


# In[ ]:





# In[ ]:




