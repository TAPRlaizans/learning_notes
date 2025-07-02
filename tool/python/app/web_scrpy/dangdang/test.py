import re
import requests
import sys
sys.path.append("..")
from module.url_requset_module import url_requset
from module.url_parse import url_parse

def main(page):
    url = 'http://bang.dangdang.com/books/fivestars/01.00.00.00.00.00-recent30-0-0-1-' + str(page)
    html = url_requset.request_dest_url(url)
    string=f"html_page{page}.txt"
    with open(f"{string}",'w',encoding="utf-8") as file:
            file.write(html)

    string_pattern = r""
    items = url_parse.parse_url_source_code(html) 
    
    for item in items:
        print(item)

#    for item in items:
#        write_item_to_file(item)
if __name__ == "__main__":
        for i in range(1, 2):
            main(i)
