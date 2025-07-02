import re
import requests
import sys
from bs4 import BeautifulSoup   
sys.path.append("..")
from module.file import file
from module.url_requset_module import url_requset
from module.url_parse import url_parse
 
def main():
    url = "https://guba.eastmoney.com/"
    url1 = "https://xueqiu.com/S/SZ000002/285969612"
    html = url_requset.request_dest_url(url1)
    print(html)
    if (file.write_file(html, "./" , "xueqiu.txt") == None):
        print("write file failed!")

    if (html == None):
        print("html requeset failed!")
        return False
    
    soup = BeautifulSoup(html, "lxml")
    list = soup.find(class_='grid_view').find_all('li')
    
if __name__ == "__main__":
    main()
