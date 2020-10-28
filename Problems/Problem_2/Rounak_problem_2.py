#!/usr/bin/env python
# coding: utf-8

# In[13]:


n = int(input("N = "))
z = int(n)
flag = 0

while (n!=0) :
    d = int(n%10)
    if z%d == 0:
        flag = 1
        break
    n=int(n/10)

if flag ==1:
    print('YES')
else:
    print("NO")


# In[ ]:




