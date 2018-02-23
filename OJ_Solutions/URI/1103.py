while True:
    li = input().split()
    if int(li[0])==0 and int(li[1])==0 and int(li[2])==0 and int(li[3])==0:
        break
    
    a = int(li[3]) - int(li[1])
    b = int((int(li[2]) - int(li[0]))*60)

    if a+b<0:
        print (a+b+1440)
    else:
        print (a+b)
