#include<iostream>
using namespace std;
class Person
//成员变量和成员函数分开储存
{
public:
	int a;  //非静态成员变量 属于类的对象上
	static int b;  //静态成员变量 不属于类的对象上
	void func() {};   //非静态成员函数 不属于类的对象上
	static void func2() {};  //静态成员函数 不属于类的对象上
};
void test01()
{
	Person p;
	//空对象所占的空间为1
	//C++编译器会给每个空对象分配一个字节的空间，是为了区分空对象所占的内存的位置
	//每个空对象都有一个独一无二的空间
	cout << "size of p =" << sizeof(p) << endl;
}
void test02()
{
	Person p;
	cout << "size of p =" << sizeof(p) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
};