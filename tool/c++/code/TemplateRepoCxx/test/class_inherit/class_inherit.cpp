#include <iostream>
#include <stdint.h>
#include <memory.h>                     //使用shared_ptr和make_shared需要的头文件
// #include "class_inherit.h"
using namespace std;

class Base1 {
 public:
    virtual int get_public_mem(){return 0;};
    int get_protected_mem(){return protected_mem;};

public:
    int public_mem = 0;                 //4字节
    bool flag_finish = false;           //1个字节
    static uint64_t num_loop;           //8字节
protected:
    int protected_mem = 1;              //4字节
private:
    int private_mem = 2;                //4字节
                                        //一共21个字节
};

class Child : public Base1 {
 public:
    int get_public_mem()override {return public_mem;};
    // int get_private_mem(){return private_mem;};              基类的private成员，只能被基类的

};


int main() 
{
    std::cout << "int byte num: " << sizeof(int) << std::endl;
    
    //通过new分配内存
    Child *C = new Child;//指针指向对象 
    std::cout << "class child1 size: " << sizeof(Child) << std::endl;                            //实际测试出来时24字节，比上面的21字节多了4字节的vtable
    std::cout << "child1 get public memeber: " << C->get_public_mem() << std::endl;              //child类继承了base类的get_public_mem(), 并重写（override）进行了打印输出
    std::cout << "child1 get protected memeber: " << C->get_protected_mem() << std::endl;        //child类直接继承了base类的get_protected_mem(), 无法重写（override）进行了打印输出
    
    //通过malloc分配内存
    // Child *C2 = malloc(sizeof(Child));                                                   //malloc分配的内存不会直接使用，需要进行强制类型转换，因为malloc是c++标准库里面的函数，返回的是void*
    Child *C2 = reinterpret_cast<Child*>(malloc(sizeof(Child)));                            //malloc分配的内存不会在析构函数中释放
    std::cout << "class child2 size: " << sizeof(Child) << std::endl;
    std::cout << "child2 get public memeber: " << C->get_public_mem() << std::endl;
    std::cout << "child2 get protected memeber: " << C->get_protected_mem() << std::endl;
    delete C;
    free(C2);

    //通过make_ptr分配内存
    std::shared_ptr<Child> C3 = std::make_shared<Child>();
    std::cout << "class child3 size: " << sizeof(Child) << std::endl;
    std::cout << "child3 get public memeber: " << C3->get_public_mem() << std::endl;
    std::cout << "child3 get protected memeber: " << C3->get_protected_mem() << std::endl;

    return 0;
}

