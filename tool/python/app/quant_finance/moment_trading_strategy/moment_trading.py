# 导入相关模块
import sys
import os
import numpy as np
import tushare as ts
import pandas as pd
import mplfinance as mpf
import matplotlib.pyplot as plt

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PARENT_DIR = os.path.dirname(BASE_DIR)
PARENT_PARENT_DIR = os.path.dirname(PARENT_DIR)
sys.path.append(BASE_DIR)
sys.path.append(PARENT_DIR)
sys.path.append(PARENT_PARENT_DIR)
from common_module.json_helper import ArgsParse

def get_trading_pair_raw_data(pair_code):
    return True

def get_moment_info(raw_data, process_mode="substract"):
    return True

def plot_concentrated_chart(raw_data, moment_info):
    return True

if __name__ == '__main__':
    pth
    param_object =ArgsParse.read_json_file_to_object()

    raw_data = get_trading_pair_raw_data(param_object["trading_code"])
    if raw_data != True:
        print("get raw data failed!")
        exit(-1)
    
    moment_info = get_moment_info(raw_data, param_object["process_mode"])
    if moment_info != True: 
        print("get raw data failed!")
        exit(-1)

    plot_concentrated_chart(raw_data, moment_info)