#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person 的默认构造函数调用" << endl;
	}
	Person(int age,int height)
	{
		m_age = age;
		m_Height = new int (height);
		cout << "Person 的有参构造函数的调用" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		//m_Height = p.m_Height; //编译器默认提供的拷贝代码（浅拷贝），复制出一个新的指针指向了同一块内存空间
		m_Height = new int(*(p.m_Height)); //深拷贝，重新再堆区开辟内存来保存被拷贝对象指针所指向的值，再用一个新的指针指向这块内存
		//拷贝和被拷贝的对象的指针指向的是不同内存，则不会发生内存呗重复释放的情况
		cout << "Person 的拷贝构造函数的调用" << endl;
	}
	~Person()
	{
		//析构代码，将我们在堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person 的析构函数调用" << endl;
	}
	int m_age;
	int* m_Height;
};
void test01()
{
	Person p1(18,170);
	cout << "p1 的年龄为" << p1.m_age<<"   p1 的身高为" <<*(p1.m_Height)<< endl;
	Person p2(p1); //如果利用编译器提供的拷贝构造函数，会做浅拷贝操作，重新复制出另一个指针变量给p2，导致同一个地址的内存被重复释放
	//浅拷贝带来的问题就是堆区的内存被重复释放
	cout << "p2 的年龄为" << p2.m_age << "   p2 的身高为" << *(p2.m_Height)<< endl;
}
int main()
{
	test01();
	return 0;
};