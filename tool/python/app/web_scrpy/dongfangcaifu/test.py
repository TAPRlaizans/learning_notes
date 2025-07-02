import re
import requests
import sys
sys.path.append("..")
from module.url_requset_module import url_requset
from module.url_parse import url_parse
 
def main():
   url1= "https://guba.eastmoney.com/"
   html = url_requset.request_dest_url(url1)
   
   if html == None:
        print("html is None")
        return
   string=f"donfangcaifu.txt"
   with open(f"{string}",'w',encoding="utf-8") as file:
        file.write(html)

if __name__ == "__main__":
    main()
