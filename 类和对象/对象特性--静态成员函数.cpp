#include<iostream>
using namespace std;
class Person
{
public:
	//静态成员函数
	//1.所有对象共享同一份函数
	//2.静态成员函数只能访问静态成员变量
	static int a;
	int b;
	static void func()
	{
		a = 100;
		//b - 200; 静态成员函数无法访问非静态成员变量，无法区分到底是哪个对象的变量
		cout << "静态成员函数的调用" << endl;
	}
	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "私有权限静态成员函数的调用" << endl;
	}
	};
int Person::a = 100;
void test01()
{
	//静态成员函数有两种访问方式
	//1.通过对象访问
	Person p;
	p.func();

	//2.通过类名进行访问
	Person::func();
	//Person::func2();
}
int main()
{
	test01();
	return 0;
};