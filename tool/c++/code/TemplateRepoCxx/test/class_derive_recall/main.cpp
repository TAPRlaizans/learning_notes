#include <iostream>
using namespace std;
class Base1 {
 public:
  Base1() { cout << "created Base1 " << endl; }
  ~Base1() { cout << "delete Base1 " << endl; }
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
  Child *C1 = new Child;//指针指向对象
  cout << "*********end***********" << endl;
  delete C1;
}

