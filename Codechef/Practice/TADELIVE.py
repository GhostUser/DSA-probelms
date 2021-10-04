n,x,y=map(int, input().split())
arr=list(map(int, input().split()))
barr=list(map(int, input().split()))
mas=0
z=[[i, abs(arr[i]-barr[i])] for i in range(n)]
z.sort(key=lambda x:x[1], reverse=True)
for i in z:
    if (arr[i[0]]>=barr[i[0]]):
        if x>0:
            mas+=arr[i[0]]
            x-=1
        else:
            mas+=barr[i[0]]
            y-=1
    elif(arr[i[0]]<=barr[i[0]]):
        if y>0:
            mas+=barr[i[0]]
            y-=1
        else:
            mas+=arr[i[0]]
            x-=1
print(mas)