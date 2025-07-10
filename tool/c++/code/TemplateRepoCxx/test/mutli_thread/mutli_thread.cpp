#include <iostream>
#include <thread>
using namespace std;

// 一个简单的函数，作为线程的入口函数
void foo(int Z) {
    for (int i = 0; i < Z; i++) {
        cout << "function pointer!\n";
    }
}

// 可调用对象的类定义
class ThreadObj {
public:
    void operator()(int x) const {
        for (int i = 0; i < x; i++) {
            cout << "function class!\n";
        }
    }
};

int main() {
    cout << "1111111111" << endl;

    // 使用函数指针创建线程
    thread th1(foo, 3);

    // 使用函数对象创建线程
    thread th2(ThreadObj(), 3);

    // 使用 Lambda 表达式创建线程
    thread th3([](int x) {
        for (int i = 0; i < x; i++) {
            cout << "lambda function!\n";
        }
    }, 3);

    // 等待所有线程完成
    th1.join(); // 等待线程 th1 完成
    th2.join(); // 等待线程 th2 完成
    th3.join(); // 等待线程 th3 完成

    return 0;
}