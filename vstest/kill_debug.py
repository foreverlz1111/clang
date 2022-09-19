import os
import sys

def search():
    cur = os.getcwd()
    try:
        for x in os.scandir(cur):
            if x.is_dir and x.name == ".vs" or x.name =="Debug":
                #x {path,name,inode,is_node(),is_file(),is_symlink,stat}
    except Exception:
        print(Exception)

if __name__ == "__main__":
    search()
