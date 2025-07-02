import re
import requests

def request_dest_url(url):
    # create header info
    headers={
        "User-Agent" : "Mozilla/5.0 (Windows; U; Windows NT 5.1; zh-CN; rv:1.9.1.6) ",
        "Accept" : "text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8",
        "Accept-Language" : "en-us",
        "Connection" : "keep-alive",
        "Accept-Charset" : "GB2312,utf-8;q=0.7,*;q=0.7"
    }

    try:
        response = requests.get(url, headers=headers)
        if response.status_code == 200:
            return response.text
    except requests.RequestException:
        return None
