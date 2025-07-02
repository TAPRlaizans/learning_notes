#include <iostream>
#include <stdio.h>
 
#define MAX(x,y) (((x)>(y))?(x):(y))
#define MIN(x,y) (((x)<(y))?(x):(y))

int main()
{
	int x = 2, y = 8;
	printf("x = %d, y = %d\n", x, y);
 
	//int MAX_result = MAX(x, y); 
	printf("MAX_result:%d\n", MAX(x, y)); //如果把中间变量MAX_result给去掉，直接把宏放在printf里面，是会报错的！
 
	system("pause");
	return 0;
}