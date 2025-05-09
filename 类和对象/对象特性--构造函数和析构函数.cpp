#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Person
{
public:
	//构造函数用于初始化对象，函数名称与类名相同
	//没有返回值也不写void，构造函数可以有参数，所以可以发生重载
	//程序在调用对象时会自动调用构造，无须手动调用，而且只会调用一次
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}
	//析构函数用于清理 ，函数名称与类名相同，但是前面要加一个~
	//没有返回值也不写void，析构函数不可以有参数，所以不能发生重载
	//程序在对象销毁前会自动调用析构，无须手动调用，而且只会调用一次
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};
//如果我们没写构造函数和析构函数，系统就会自己提供构造函数和析构函数，只不过会是空实现
int main()
{
	Person p1; //存放在栈区，执行完程序后会被释放
	return 0;
}  





