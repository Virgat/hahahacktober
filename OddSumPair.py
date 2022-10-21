for _ in range(int(input())):
    a,b,c = map(int,input().split(" "))
    odd=0
    even=0
    if a%2!=0:
        odd+=1
    else:
        even+=1
    if b%2!=0:
        odd+=1
    else:
        even+=1
    if c%2!=0:
        odd+=1
    else:
        even+=1
        
    if (odd==2 and even==1) or (even==2 and odd==1):
        print("YES")
    else:
        print("NO")
