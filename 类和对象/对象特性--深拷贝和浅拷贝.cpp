#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age,int height)
	{
		m_age = age;
		m_Height = new int (height);
		cout << "Person ���вι��캯���ĵ���" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		//m_Height = p.m_Height; //������Ĭ���ṩ�Ŀ������루ǳ�����������Ƴ�һ���µ�ָ��ָ����ͬһ���ڴ�ռ�
		m_Height = new int(*(p.m_Height)); //����������ٶ��������ڴ������汻��������ָ����ָ���ֵ������һ���µ�ָ��ָ������ڴ�
		//�����ͱ������Ķ����ָ��ָ����ǲ�ͬ�ڴ棬�򲻻ᷢ���ڴ����ظ��ͷŵ����
		cout << "Person �Ŀ������캯���ĵ���" << endl;
	}
	~Person()
	{
		//�������룬�������ڶ������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person ��������������" << endl;
	}
	int m_age;
	int* m_Height;
};
void test01()
{
	Person p1(18,170);
	cout << "p1 ������Ϊ" << p1.m_age<<"   p1 �����Ϊ" <<*(p1.m_Height)<< endl;
	Person p2(p1); //������ñ������ṩ�Ŀ������캯��������ǳ�������������¸��Ƴ���һ��ָ�������p2������ͬһ����ַ���ڴ汻�ظ��ͷ�
	//ǳ����������������Ƕ������ڴ汻�ظ��ͷ�
	cout << "p2 ������Ϊ" << p2.m_age << "   p2 �����Ϊ" << *(p2.m_Height)<< endl;
}
int main()
{
	test01();
	return 0;
};