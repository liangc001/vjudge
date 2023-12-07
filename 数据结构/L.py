from multiprocessing.connection import answer_challenge


n = input()
m = input()

s1 = int(input(),2)
s2 = int(input(),2)

ans = 0

while s2!=0:
    ans=ans+(int(s1,10) & int(s2,10))
    s2=s2/10

print(ans)