def prime(num): # Function to check a number is prime
    if num < 2:
        return False
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return True

n = int(input("Enter size: "))
l = []

for i in range(2, n+1):
    if prime(i):
        l.append(i)

s=[]
sum=0
u=0
for i in l:
    sum=sum+i
    s.append(sum)


for i in l:
    for j in s:
        if(i==j):
            u+=1



print(l)
print(s)
print(u-1)
        
    

    
