n = input().split()

a = int(n[0])
b = int(n[1])
c = int(n[2])

if b < a and c >= b:
    print(":)")
elif b > a and c <= b:
    print(":(")
elif b > a and c > b:
    if c-b < b-a:
        print(":(")
    else:
        print(":)")
elif b < a and c < b:
    if c-b > b-a:
        print(":)")
    else:
        print(":(")
elif b == a:
    if c > b:
        print(':)')
    else:
        print(':(')

