from numpy import random
LOG_INPUT_NUM=5             #change here
n=2**LOG_INPUT_NUM                         
x=random.randint(100, size=(n))
file = open("sort.mem","w+")
def f(x):
    y=str(x)[2:]
    z=""
    for i in range(0,8-len(y)):
        z+="0"
    z+=y
    return z
for i in range(n):
    file.writelines(f(hex(x[i]))+"\n")


