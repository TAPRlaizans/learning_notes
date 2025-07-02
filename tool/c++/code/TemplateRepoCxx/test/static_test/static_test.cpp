#include <iostream>
using namespace std;
int test()
{
    // static int a;      未初始化的变量a默认值值为0
    static int a = 2;
    a++;
    printf("******test current a: %d*******\n", a);
    return 1;
}
int main() {
  cout << "*********call 1***********" << endl;
  test();
  // printf("******test current a: %d*******\n", a);           在函数外面是访问不到元素a的
  cout << "*********call 2***********" << endl;
  test();
  cout << "*********end***********" << endl;
}

