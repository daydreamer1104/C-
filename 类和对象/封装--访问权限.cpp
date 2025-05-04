#include <iostream>
#include <string>
using namespace std;
//三种访问权限
//公共权限 public 类内可以访问，类外也可以访问
//保护权限 protected 类内可以访问，类外不可以访问   在继承时，子类可以访问父类的保护内容
//私有权限 private 类内可以访问，类外不可以访问  在继承时，子类不可以访问父类的私有内容
class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;

};
int main()
{
	Person p;
	p.m_Name = "张三";
	//p.m_Car = "宝马";  不可以被访问
	//p.m_Password = 123456;
	return 0;
}  