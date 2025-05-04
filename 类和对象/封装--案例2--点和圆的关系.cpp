#include <iostream>
#include <string>
#include<cmath>
using namespace std;
//创建圆类和点类，判断点和圆之间的关系
class Point
{
private:
	//属性 即x，y坐标
	int m_x;
	int m_y;
public:
	void setX(int x)
	{
		m_x = x;
	}
	void setY(int y)
	{
		m_y = y;
	}
	int getX()
	{
		return m_x;
	}
	int getY()
	{
		return m_y;
	}
};
class Circle
{
private:
	//属性 圆心（这里直接用Point类来表示），圆的半径
	Point center;
	int m_r;
public:
	//判断点和圆之间关系的函数，根据点和点之间的距离公式来判断
	void verify(Point p)
	{
		double distance = sqrt(pow(p.getX() - center.getX(), 2) + pow(p.getY() - center.getY(), 2));
		if (distance < m_r)
		{
			cout << "点在圆内" << endl;
		}
		else if (distance == m_r)
		{
			cout << "点在圆上" << endl;
		}
		else
			cout << "点在圆外" << endl;
	}
	void setR(int r)
	{
		m_r = r;
	}
	//初始化圆心的属性
	void setCenter(int x, int y)
	{
		center.setX(x);
		center.setY(y);
	}
	int getCenterX()
	{
		return center.getX();
	}
	int getCenterY()
	{
		return center.getY();
	}
	int getR()
	{
		return m_r;
	}
};
int main()
{
	Circle c1;
	Point p1;
	p1.setX(1);
	p1.setY(0);
	c1.setCenter(0, 0);
	c1.setR(1);
	c1.verify(p1);
	Circle c2;
	Point p2;
	p2.setX(1);
	p2.setY(1);
	c2.setCenter(0, 0);
	c2.setR(2);
	c2.verify(p2);
	return 0;
}  





