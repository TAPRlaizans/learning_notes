import threading
import time
import signal
import sys

def print_timestamp():
    timestamp = int(time.time())
    formatted_timestamp = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(timestamp))
    return formatted_timestamp

# 定义线程函数
def thread_function(name):
    while True:
        print("Thread %s is running" % name)
        time.sleep(5)
        print_timestamp
        
# 定义信号处理函数
def signal_handler(signal, frame):
    print("Received interrupt signal. Exiting...")
    sys.exit(0)

# 注册信号处理函数
signal.signal(signal.SIGINT, signal_handler)
signal.signal(signal.SIGTERM, signal_handler)

# 创建线程对象
thread1 = threading.Thread(target=thread_function, args=("Thread 1",))
thread2 = threading.Thread(target=thread_function, args=("Thread 2",))

# 启动线程
thread1.start()
thread2.start()

# 等待线程完成
thread1.join()
thread2.join()

print("All threads have completed")