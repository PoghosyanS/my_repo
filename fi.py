import os
def func(path,file_name):
    for i in os.listdir(path):
        if os.path.isdir(path + "/" + i):
            func(path + "/" + i,file_name)
        if os.path.isfile(path + "/" + i):
            if i == file_name:
                print(path +"/" +file_name)
        if os.path.isdir(path + "/" + i):
            if i == file_name:
                print(path + "/" +file_name)

print(func("/home/simon/tasks/bash","file1.txt"))
