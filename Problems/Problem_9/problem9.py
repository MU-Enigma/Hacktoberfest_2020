stmt = input("Enter statement")
arr = stmt.split()

# str = arr[0]
# print(str[:1])

l = []


def pig_latin(x):
    first_let = x[:1]
    rem_str = x[1:]
    l.append(rem_str + first_let + "ay")


for ele in arr:
    pig_latin(ele)


print(' '.join(l))
