#include <iostream>
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
  int int_value;
  cin >> int_value;
  std::cout << int_value << std::endl;
  cout << "*********end***********" << endl;
  return 0;
}

