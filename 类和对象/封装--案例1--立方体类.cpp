#include <iostream>
#include <string>
using namespace std;
//设计立方体类，求出立方体的表面积和体积，分别用全局函数和成员函数判断两个立方体是否相等
class Cube
{
public:
	void setL(int L)
	{
		m_L = L;
	}
	void setH(int H)
	{
		m_H = H;
	}
	void setW(int W)
	{
		m_W = W;
	}
	int getL()
	{
		return m_L;
	}
	int getH()
	{
		return m_H;
	}
	int getW()
	{
		return m_W;
	}
	int calculateS()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	int calculateV()
	{
		return m_L * m_H * m_W;
	}
	//成员函数判断两个立方体是否相等
	void verify(Cube c)
	{
		if (m_L != c.m_L || m_H != c.m_H || m_W != c.m_W)
		{
			cout << "两个立方体不相等" << endl;
		}
		else
			cout << "两个立方体相等" << endl;
	}
private:
	//属性  长宽高
	int m_L;
	int m_H;
	int m_W;
};
//全局函数判断两个立方体是否相等，参数传入两个Cube类对象
void Verify(Cube c1,Cube c2)
{
	if (c1.getL() != c2.getL() || c1.getH() != c2.getH() || c1.getW() != c2.getW())
	{
		cout << "两个立方体不相等" << endl;
	}
	else
		cout << "两个立方体相等" << endl;

}
int main()
{
	Cube c1;
	Cube c2;
	c1.setL(2);
	c1.setH(3);
	c1.setW(2);
	c2.setL(3);
	c2.setH(3);
	c2.setW(2);
	cout << "表面积：" << c1.calculateS() << endl;
	cout << "体积：" << c1.calculateV() << endl;
	cout << "表面积：" << c2.calculateS() << endl;
	cout << "体积：" << c2.calculateV() << endl;
	c1.verify(c2);
	Verify(c1,c2);
	return 0;
}  