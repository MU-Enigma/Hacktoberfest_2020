def digitdiv(N):
    digits = [int(digit) for digit in str(N)]
    for digit in digits:
        if N%digit == 0:
            return "YES"

    return "NO"
    
digitdiv(int(input("N =")))