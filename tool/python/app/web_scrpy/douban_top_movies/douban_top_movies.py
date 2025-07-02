import lxml
from bs4 import BeautifulSoup   
# import beautifulsoup4
import os
import sys
sys.path.append("..")
from module.file import file
from module.url_requset_module import url_requset
import xlwt

def main():
    path_file = "F:\code_project\Learn\python\web_scrpy\module\html.txt"
    url = "https://movie.douban.com/top250"
    html = url_requset.request_dest_url(url)

    if (html == None):
        print("html requeset failed!")
        return False

    soup = BeautifulSoup(html, "lxml")
    list = soup.find(class_='grid_view').find_all('li')

    book=xlwt.Workbook(encoding='utf-8',style_compression=0)
    sheet=book.add_sheet('豆瓣电影Top250',cell_overwrite_ok=True)
    sheet.write(0,0,'名称')
    sheet.write(0,1,'图片')
    sheet.write(0,2,'排名')
    sheet.write(0,3,'评分')
    sheet.write(0,4,'作者')
    sheet.write(0,5,'简介')

    loop = 1
    for item in list: 
        item_index = item.find(class_='').string
        item_name = item.find(class_='title').string
        item_img = item.find('a').find('img').get('src')
        item_score = item.find(class_='rating_num').string
        item_author = item.find('p').text
        item_intr = item.find(class_='inq').string

        sheet.write(loop, 0, item_name)
        sheet.write(loop, 1, item_img)
        sheet.write(loop, 2, item_index)
        sheet.write(loop, 3, item_score)
        sheet.write(loop, 4, item_author)
        sheet.write(loop, 5, item_intr)
        loop = loop + 1

    book.save(u'豆瓣最受欢迎的250部电影.xlsx')

if __name__ == "__main__":
   main()