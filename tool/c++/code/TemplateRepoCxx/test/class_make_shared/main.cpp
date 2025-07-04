#include <iostream>
#include <memory>
using namespace std;
class Base1 {
 public:
  Base1() {  cout << "created Base1 " << endl;}
  ~Base1() { cout << "delete Base1 " << endl;}
};
class Base : public Base1 {
 public:
  Base() { cout << "created Base " << endl; }
  ~Base() { cout << "delete Base " << endl; }
};
class Child : public Base {
 public:
  Child() { cout << "created Child " << endl; }
  ~Child() { cout << "delete Child " << endl; }
};

int main() {
  cout << "*********start***********" << endl;
  std::shared_ptr<Base> base = std::make_shared<Base>();        //通过make_shared分配内存,base类，观察类的构造函数和析构函数的调用情况
  cout << "*********end***********" << endl;
  return 0;
}

/*
*********start***********
created Base1
created Base
*********end***********
delete Base
delete Base1
*/