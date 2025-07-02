import time 
def ordered_sequential_search(alist, target):
    pos = 0
    flag_found = False
    flag_stop = False

    while pos < len(alist) and flag_found == False:
        if alist[pos] == target:
            flag_found = True
        else:
            if alist[pos] > target:
                break
            pos = pos + 1
    return flag_found, pos
    

input_list = [0, 1, 2, 8, 13, 17, 19, 32, 42]
print(f"{ordered_sequential_search(input_list, 14)}")   
