import re
import requests

def parse_url_source_code(html, string_pattern):
   pattern = re.compile(string_pattern,re.S)
   items = re.findall(pattern,html)
#    print(items)
#    for item in items:
#        yield {
#            'range': item[0],
#            'iamge': item[1],
#            'title': item[2],
#            'recommend': item[3],
#            'author': item[4],
#            'times': item[5],
#            'price': item[6]
#        }
