s = [1,2,1,3,2]
m = 2
d = 3
l = []
count = 0
for i in range(len(s)-m+1):
    if(sum(s[i:i+m])==d):
        count+=1