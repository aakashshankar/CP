n = int(input())
p = input()
q = input()
r = input()
s = ""
l = []
if p[0]=="#":
    i = 1
    s = "#"
else:
    i = 0
while i+5<=len(p):
    if p[i]==" ":
        i+=1
        continue
    if p[i]=="." and q[i]=="."and r[i]==".":
        i+=1
        continue

    if p[i]=="#":
        i+=1
        s=s+'#'
        continue
    l.append(p[i:i+5].strip())
    l.append(q[i:i+5].strip())
    l.append(r[i:i+5].strip())
    if l==['. * .','* * *',"* . *"]:
        s=s+'A'
    elif l==['* * *','* * *',"* * *"]:
        s=s+'E'
    elif l==['* * *', '. * .', '* * *']:
        s=s+'I'
    elif l==['* * *', '* . *', '* * *']:
        s=s+'O'
    elif l==['* . *','* . *',"* * *"]:
        s=s+'U'
    l = []
    i=i+5
print(s)
