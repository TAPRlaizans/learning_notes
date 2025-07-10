#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Base 
{
 public:
    Base() { cout << "created Base " << endl; }
    ~Base() { cout << "delete Base " << endl; }
private:
    friend class Child;                     //声明为friend，派生类可以使用子类的私有对象
    int private_num = 20;
};

class Child
{
  public: 
    bool init()
    {
        base_ = make_shared<Base>();
        return true;
    };
    Child() { cout << "created Child " << endl; }
    ~Child() { cout << "delete Child " << endl; }
    int get_base_private_num() { return base_->private_num; }
  private:
    shared_ptr<Base> base_;
};

int main() {
  cout << "*********start***********" << endl;
  shared_ptr<Child> child = make_shared<Child>();
  child->init();
  cout << child->get_base_private_num() << endl;
  cout << "*********end***********" << endl;
  return 0;
}

