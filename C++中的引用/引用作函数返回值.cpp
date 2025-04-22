#include <iostream>
#include <string>
using namespace std;
//引用作函数的返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10; //局部变量存放在栈区
	return a;
}

//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10; //静态变量存放在全局区，全局区上的数据在程序结束后被释放
	return a;
}


int main()
{
	//int& ref = test01();
	int& ref = test02();
	//cout << "ref= " << ref << endl; //第一次结果正确，是因为编译器做了一次保留
	//cout << "ref= " << ref << endl; //第二次结果错误，因为a的内存已经被释放
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;
	test02() = 1000; //如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;
	return 0;
}