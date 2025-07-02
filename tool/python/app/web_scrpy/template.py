import re
import requests
import sys
from bs4 import BeautifulSoup   

sys.path.append("..")
from module.url_requset_module import url_requset
from module.url_parse import url_parse
 
def main():
    url = ""
    html = url_requset.request_dest_url(url)

    if (html == None):
        print("html requeset failed!")
        return False
    
    soup = BeautifulSoup(html, "lxml")
    list = soup.find(class_='grid_view').find_all('li')
    
if __name__ == "__main__":
    main()

1,5,2,4,3
