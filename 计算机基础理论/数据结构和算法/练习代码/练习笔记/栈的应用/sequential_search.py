import time 
def sequential_search(alist, target):
    pos = 0
    found = False

    while pos < len(alist) and found == False:
        if alist[pos] == target:
            found = True
        else:
            pos = pos + 1
    return found, pos
    

input_list = [1,2,32,8,17, 19, 42, 13, 0]
# print(f"{sequential_search(input_list, 3)}")    #不包含此元素
# print(f"{sequential_search(input_list, 0)}")    #包含此元素
