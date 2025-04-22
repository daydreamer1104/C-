#include<iostream>
using namespace std;
//栈区的注意事项 不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int* func() //形参数据也会放在栈区
{
	int a = 10; //局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
	return &a; //返回局部变量的地址
}
int main()
{
	int* p = func();
	cout << *p << endl; //第一行输出10，此时编译器做了一次保留
	cout << *p << endl; //第二行输出乱码，第二次数据不再被保留
	//VS2022不会出现以上的情况
	return 0;
}