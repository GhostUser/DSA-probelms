# cook your dish here
for _ in range(int(input())):
    s=list(input())
    cnt=0
    for i in s:
        if i=="4":
            cnt+=1
    print(cnt)