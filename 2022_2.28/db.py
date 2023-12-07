import imp
from math import sqrt


for i in range(1,10000000000000000):
    t=i*(i+1)/2
    m=sqrt(t)
    if(m==int(m)):
        print(i)