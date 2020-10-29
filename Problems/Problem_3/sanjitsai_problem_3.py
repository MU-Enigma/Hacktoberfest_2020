def p(a,b,c):
    if a*a==(b*b) + (c*c):
        print("a = ",a,"b = ",b,"c = ",c)
    elif b*b== (a*a) + (c*c):
        print("b= {},a= {},c ={}".format(b,a,c))
    elif c*c == (b*b) +(a*a):
        print("c = ",c , "\nb = ",b, "\na = ",a)
    else:
        print("NOPE!")