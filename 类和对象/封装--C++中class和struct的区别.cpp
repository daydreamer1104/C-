#include <iostream>
#include <string>
using namespace std;
//struct默认权限是public，class默认权限是private
class C1
{
	int m_A; // 默认权限 私有private
};
struct C2
{
	int m_A; //默认权限 公共public
};
int main()
{
	C1 c1;
	C2 c2;
	//c1.m_A = 100;  不能访问
	c2.m_A = 100;
	return 0;
}  