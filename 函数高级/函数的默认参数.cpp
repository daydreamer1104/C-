#include <iostream>
#include <string>
using namespace std;
//�﷨�� ����ֵ���� ���������β� = Ĭ��ֵ�� {}
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������
//1. ���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����ң������Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}
//2. �����������������Ĭ�ϲ���������ʵ�ֲ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 10, int b = 10);
int func2(int a , int b )
{
	return a + b;
}
int main()
{
	//cout << func(10,30) << endl; //���������ֵ�����ô����ֵ������Ĭ�ϲ�����ֵ�����û�У���ô��Ĭ��ֵ
	cout << func2(10,10) << endl;
	return 0;
} 