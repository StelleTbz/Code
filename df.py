def mul (n):
    num=1
    for i in range(1,51):
        num*=i
    return num


sum=0
for i in range(51):
    sum+=mul(i)

print (sum)

    
