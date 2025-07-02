import sys

print(sys.getrecursionlimit())  #原始系统分配栈帧为1000
sys.setrecursionlimit(3000)   #使用该接口调整为3000
print(sys.getrecursionlimit())