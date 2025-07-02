import time 
def binary_search(alist, target):
    first = 0
    last = len(alist) - 1
    # print(last, first)
    flag_found = False
    # midpoint = 0

    while first <= last and flag_found == False:
        midpoint = (first + last)//2    #符号//是取整出发，向上取整
        if alist[midpoint] == target:
            flag_found = True
        else:
            if target > alist[midpoint]:
                first = midpoint + 1        
            else:
                last = midpoint - 1
    return flag_found, midpoint
    

if __name__ == "__main__":
    input_list = [0, 1, 2, 8, 13, 17, 19, 32, 42,]
    #测试存在数据项
    for item in input_list:
        print(f"test item: {item}")
        print(f"{binary_search(input_list, item)}")   

    #测试不存在数据项
        print(f"{binary_search(input_list, 2.5)}")   
