#include <iostream>
#include <thread>
#include <memory>
#include <string>
using namespace std;

class Base 
{
 public:
    Base() { cout << "created Base " << endl; }
    ~Base() { cout << "delete Base " << endl; }
};

class Child
{
  public: 
    Child() { cout << "created Child " << endl; }
    ~Child() { cout << "delete Child " << endl; }
};

int main() {
  cout << "*********start***********" << endl;
  /*开始main函数处理*/
  cout << "*********end***********" << endl;
  return 0;
}

