t=int(input())
for v in range(0,t):
    n=int(input())
    y=1
    for i in range(1,n+1):
        y=y*i
        
    a=str(y)  
    v=int(a[::-1])
    b=str(v)    
    c=len(a)
    d=len(b)
    e=c-d
    print(e)