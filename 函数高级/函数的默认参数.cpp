#include <iostream>
#include <string>
using namespace std;
//语法： 返回值类型 函数名（形参 = 默认值） {}
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1. 如果某个位置已经有了默认参数，那么从这个位置往右，从左到右都必须有默认值
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}
//2. 如果函数的声明有了默认参数，函数实现不能有默认参数
//声明和实现只能有一个有默认参数
int func2(int a = 10, int b = 10);
int func2(int a , int b )
{
	return a + b;
}
int main()
{
	//cout << func(10,30) << endl; //如果传入了值，则用传入的值，不用默认参数的值，如果没有，那么用默认值
	cout << func2(10,10) << endl;
	return 0;
} 