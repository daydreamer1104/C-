#include <iostream>
#include <string>
using namespace std;
//将所有成员属性设置为私有，可以自己控制访问权限
//对于写权限，我们可以检测数据的有效性
class Person
{
public:
	void setName(string Name)
	{
		m_Name = Name;
	}
	void setAge(int Age)
	{
		if (Age < 0 || Age>150)
		{
			cout << "年龄输入有误，请重新输入" << endl;
			return;
		}
		else
			m_Age = Age;
	}
	void setIdol(string Idol)
	{
		m_Idol = Idol;
	}
	string getName()
	{
		return m_Name;
	}
	int getAge()
	{
			return m_Age;
	}
private:
	string m_Name;  //可读可写
	int m_Age;   //可读可写，但是必须在0~150之间
	string m_Idol;  //只可写
};
int main()
{
	Person p1;
	p1.setAge(18);
	p1.setName("张三");
	p1.setIdol("明");
	p1.setAge(166);
	cout << p1.getAge() << endl;
	cout << p1.getName() << endl;
	return 0;
}  