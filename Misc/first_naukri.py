a=[]
x=""
while(True):
    try:
        x=int(input())
        a.append(x)
    except EOFError:
        break
b=[]
for i in a:
    y=""
    x=bin(i)[2:]
    for j in range(32-len(x)):
        y+="0"
    x=y+x
    x=x[::-1]
    b.append(int(x,2))

for i in range(len(b)-1):
    print(str(b[i])+", ",end='')
print(b[len(b)-1])
