#include <iostream>
#include <memory>
using namespace std;

class Base
{

public:
  Base() { cout << "created Base " << endl; }
  ~Base() { cout << "delete Base " << endl; }

private:
  int get_num(){return num;}
  int num = 8;
};

struct Base1
{
  int get_num(){return num;}
  int num = 9;
};

int main() {
  std::cout << "*********start***********" << std::endl;
  Base *B = new Base;                                     //创建class对象
  // cout << B->get_num() << endl;                        //这里直接调用get_num()会报错"函数 "Base::get_num" (已声明 所在行数:7) 不可访问C“,因为class的成员对象默认是private

  Base1 *B1 = new Base1;                                  //创建struct对象
  std::cout << B1->get_num() << std::endl;                          //struct对象可以直接调用get_num()，因为struct的成员对象默认是public
  printf("B1->get_num(): %d\n", B1->get_num());
  std::cout << "*********end***********" << std::endl;
  return 0;
}

