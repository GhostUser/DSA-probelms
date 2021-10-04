a=['0','1','2','3','4','5','6','7','8','9']
s=list(input())
for i in range(len(a)):
    c=s.count(a[i])
    print(f"{i} {c}")
