#include <iostream>
#include "./include_1/global.cpp"
using namespace std;

int test()
{
    a++;
    printf("******current global variable a: %d*******\n", a);
    return 1;
}

int main() {
  cout << "*********start***********" << endl;
  cout << "*********add one time ***********" << endl;
  a++;          //主函数中+1
  printf("******current global variable a: %d*******\n", a);
  cout << "*********add one time ***********" << endl;
  test();       //测试函数局部空间+1
  printf("******current global variable a: %d*******\n", a);
  cout << "*********end***********" << endl;
}

