#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
//���һ��Բ�࣬��Բ���ܳ�
//class �������һ���࣬�������������
class Circle
{
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ�࣬���������Բ������
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ���" << c1.calculateZC() << endl;
	return 0;
}  