#include <iostream>
#include <string>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10; //�ֲ����������ջ��
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10; //��̬���������ȫ������ȫ�����ϵ������ڳ���������ͷ�
	return a;
}


int main()
{
	//int& ref = test01();
	int& ref = test02();
	//cout << "ref= " << ref << endl; //��һ�ν����ȷ������Ϊ����������һ�α���
	//cout << "ref= " << ref << endl; //�ڶ��ν��������Ϊa���ڴ��Ѿ����ͷ�
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;
	test02() = 1000; //��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref= " << ref << endl;
	cout << "ref= " << ref << endl;
	return 0;
}