import sys
from numpy import random
LOG_INPUT_NUM=int(sys.argv[1])           #change here
n=2**LOG_INPUT_NUM                         
x=random.randint(1000, size=(n))
file = open("input.mem","w+")
def f(x):
    y=str(x)[2:]
    z=""
    for i in range(0,8-len(y)):
        z+="0"
    z+=y
    return z
file.writelines(f(hex(n))+"\n")
for i in range(n):
    file.writelines(f(hex(x[i]))+"\n")



