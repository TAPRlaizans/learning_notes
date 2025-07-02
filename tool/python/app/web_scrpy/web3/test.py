import os
import requests
import sys
import re
# from module.url_parse import url_parse

def parse_url_source_code(html, string_pattern):
   pattern = re.compile(string_pattern,re.S)
   items = re.findall(pattern,html)
   return items

def main():
    url ="https://medium.com/@jiamigou/list/107fd219475d"
    response = requests.get(url)
    if (response.status_code != 200):
        print(f"html requeset failed! {response.status_code}")
        return False
    string = "./test.txt"
    string_pattern = r'https://medium\.com/@jiamigou/(.*?)"'
    items = parse_url_source_code(response.text, string_pattern)
    for item in items:
        print(item)
    with open(f"{string}",'w',encoding="utf-8") as file:
        file.write(response.text)

if __name__ == '__main__':
    main()