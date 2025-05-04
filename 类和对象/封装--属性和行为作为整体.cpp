#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
//设计一个圆类，求圆的周长
//class 代表设计一个类，后面就是类名称
class Circle
{
	//访问权限
public:
	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类，创建具体的圆（对象）
	Circle c1;
	//给圆对象 的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长：" << c1.calculateZC() << endl;
	return 0;
}  