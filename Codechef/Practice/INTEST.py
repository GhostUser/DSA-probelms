n, k=map(int, input().split())
s=0
for _ in range(n):
    if int(input())%k==0:
        s+=1
print(s)