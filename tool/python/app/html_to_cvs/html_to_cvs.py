import csv
import time
from bs4 import BeautifulSoup  # type: ignore
from typing import List

with open("Bookmarks.html", "r", encoding="utf-8") as f:
    soup = BeautifulSoup(f, features="html.parser")

link_list: List[List[str]] = list()

def parse_folder(folders: BeautifulSoup, tags: List[str]) -> None:
    contents = folders.find("dl", recursive=False).find_all("dt", recursive=False)
    for content in contents:
        h3 = content.find("h3")
        if h3 is not None:
            parse_folder(content, tags + [h3.string])
            continue
        a = content.find("a", recursive=True)

        # 0. Name
        link_name = a.string

        # 1. Link
        link_href = a["href"]

        # 2. Created time
        time_local = time.localtime(int(a["add_date"]))
        link_date = time.strftime("%Y-%m-%dT%H:%M:%S+08:00", time_local)  # ISO-8601

        # # 3. Cover picture
        # try:
        #     link_cover = a["icon"]
        # except KeyError:
        #     link_cover = ""

        link = [link_name, link_href, ",".join(tags), link_date]
        link_list.append(link)

parse_folder(soup.body, [])

with open("bookmarks.csv", "w", newline='', encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["Name", "Link", "Tags", "Created"])
    writer.writerows(link_list)