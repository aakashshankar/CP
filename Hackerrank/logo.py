def g(s):
    c=[]
    for i in list(set(s)):
        c.append([s.count(i),i])
    c=sorted(c,reverse=True)
    i=0
    for _ in range(3):
        le=[]
        f=c[i][0]
        while i<len(c) and c[i][0]==f:
            le.append([c[i][1],c[i][0]])
            i+=1
        for j,k in sorted(le):
            print(j, k)

