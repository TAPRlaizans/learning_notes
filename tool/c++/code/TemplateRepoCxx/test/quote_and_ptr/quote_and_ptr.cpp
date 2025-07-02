#include <iostream>
using namespace std;
int modify_value(int &value_source)
{
    value_source++;
    printf("******value_source address: %p******\n", &value_source);
    printf("*****call one time modify_value, now value: %d\n", value_source);
    return true;
}

int main() {
    int value_source = 11;

    //指针用法
    int *ptr = NULL;
    ptr = &value_source;

    //引用用法
    int &quote = value_source;

    //address
    printf("******ptr address: %p******\n", ptr);
    printf("******value_source address: %p******\n", &value_source);
    printf("******quote address: %p******\n", &quote);

    //context
    printf("******value_source context: %d******\n", value_source);    
    printf("******ptr context: %d******\n", *ptr);                      //使用指针必须使用*符号解引用
    printf("******quote context: %d******\n", quote);                   //使用引用不用使用*符号解引用，直接像是使用变量一样使用
    
    modify_value(value_source);
    printf("******after call modify_value, value context: %d******\n", value_source);    
    return true;
}

/*
******ptr address: 000000000061fe3c******
******value_source address: 000000000061fe3c******
******quote address: 000000000061fe3c******                  //上面三种访问地址的方式都是一样的
******value_source context: 11******
******ptr context: 11******
******quote context: 11******
******value_source address: 000000000061fe3c******          //在函数内部打印变量地址地址也是一样的
*****call one time modify_value, now value: 12
******after call modify_value, value context: 12******

*/

