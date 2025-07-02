#include <iostream>
using namespace std;

class Test
{
public:
    bool public_test()
    {
        count++;    
        printf("******current count value: %d******\n", count);
        return true;
    };

    static bool public_test1()
    {
        return true;
    }
private:
    bool private_public_test()
    {
        printf("******call one time private public_test func******\n");
        count++;    
        printf("******current count value: %d******\n", count);
        return true;
    }
    static int count;
};

int Test::count = 0;        //类外必须为静态成员变量进行定义初始化，否则编译器会报错
/*$ g++ ./static_class_public_test.cpp -o static_class_public_test.exe
C:\Users\ADMINI~1\AppData\Local\Temp\cck3UzNg.o:static_class_public_test.cpp:(.rdata$.refptr._ZN4Test5countE[.refptr._ZN4Test5countE]+0x0): undefined reference to `Test::count'
collect2.exe: error: ld returned 1 exit status
*/

int main() {
    Test public_test;
    cout << "*********call 1***********" << endl;
    public_test.public_test();
    // printf("******public_test current a: %d*******\n", a);           在函数外面是访问不到元素a的
    cout << "*********call 2***********" << endl;
    public_test.public_test();
    cout << "*********end***********" << endl;
}

