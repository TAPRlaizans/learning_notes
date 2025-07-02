import os

def read_file(filename):
    if(os.path.exists(filename)):
        with open(filename,"rb") as f:
            return f.read()
    else:
        print("file does not exist!")
        return None   

#直接所有数据输出到一个文件
def write_file(data, out_path, filename):
    path_file = os.path.join(out_path, filename)
    if(os.path.exists(path_file) == False):
        print(path_file)
        with open(path_file,"w") as f:
            return f.write(data)
    else:
        filename_after_rename = path_file + "_1"
        print(f"file already exists! filename rename to {filename_after_rename}")        

#追加方式
def write_file_add(data, out_path, filename):
    path_file = os.path.join(out_path, filename)
    if(os.path.exists(path_file) == True):
        print("file already exists! add data at file end!")
    else:
        print(f"file does not exists! created new file!")   
    with open(path_file,"a+") as f:
        return f.write(data)