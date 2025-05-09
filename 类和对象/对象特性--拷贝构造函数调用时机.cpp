#include <iostream>
#include <string>
#include<cmath>
using namespace std;
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
	Person(const Person& p) 
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
//拷贝构造函数的调用时机
//1. 使用一个已经创建了的对象来初始化一个新对象
void test01()
{
	Person p1(10);
	Person p2(p1);
	cout << p2.age << endl;
}
void doWork(Person p)
{

}
//2. 值传递的方式给函数参数传值
void test02()
{
	Person p;
	doWork(p);
}
Person doWork2()
{
	Person p1;
	return Person(p1); //这里如果用return p1的话，不会调用拷贝构造函数，因为编译器作了返回值优化，为了达到调用的效果，所以改为了Person(p1)
}
//3. 以值方式返回局部对象
void test03()
{
	Person p = doWork2();
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}  





