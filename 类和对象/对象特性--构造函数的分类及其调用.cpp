#include <iostream>
#include <string>
#include<cmath>
using namespace std;
//构造函数分类
//按照参数分类分为有参构造和无参构造（默认构造）
//按照类型分类分为普通构造函数和拷贝构造函数
class Person
{
	//无参构造函数（默认构造）
public:
	Person()
	{
		cout << "Person 的无参构造函数调用" << endl;
	}
	//有参构造函数
	Person(int a)
	{
		age = a;
		cout << "Person 的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p) //这里用const是为了不修改被拷贝的对象的数据
	{
		age = p.age;
		cout << "Person 的拷贝构造函数的调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person 的析构函数的调用" << endl;
	}
	int age;
};
int main()
{
	//1.括号法
	//Person p1;
	//Person p2(10);
	//Person p3(p2);
	//cout << p2.age << endl;
	//cout << p3.age << endl;
	//在调用默认构造函数时，不要用Person p1()的形式，编译器会认为是一个函数的声明
	//2.显示法
	//Person p1;
	//Person p2 = Person(10); //Person(10)是一个匿名对象，当前行执行结束后，系统会立刻回收掉匿名对象
	//Person p3 = Person(p2);
	//不要利用拷贝构造函数来初始化一个匿名对象，如Person(p3)，编译器会认为这个代码的是一个对象的声明，即Person p3
	//3.隐式转换法
	Person p1 = 10;
	Person p2 = p1;
	return 0;
}  





