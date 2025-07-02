import threading
import signal
import sys
import time

class MyThread():
    def __init__(self):
        pass

    def my_func_class(a, b):
        print("my_func_class start")
        while True:
            print(f"my_func_class, a: ", {a}, "b: ", {b})
            time.sleep(1)
        print("my_func_class end")

def my_func(a, b):
    print("my_func start")
    while True:
        print(f"my_func , a: ", {a}, "b: ", {b})
        time.sleep(1)
    print("my_func end")

def quit(signal, frame):
    print(f"user interrupt, sinal type: {signal}")
    sys.exit()

if __name__ == "__main__":
    try:
        signal.signal(signal.SIGINT, quit)
        signal.signal(signal.SIGTERM, quit)
        t1 = threading.Thread(target=my_func, args=(1, 2))
        t2 = threading.Thread(target=MyThread.my_func_class, args=(1, 2))
        t1.daemon = True
        t1.start()
        t2.daemon = True
        t2.start()

        while True:
            pass
    except Exception as exc:
        print(exc)