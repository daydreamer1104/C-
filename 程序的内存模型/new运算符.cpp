#include<iostream>
using namespace std;
//1.new�Ļ����﷨
int* func()
{
	//�ڶ�������һ����������
	//new���ص���һ�����������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������� �ɳ���Ա�����٣�����Ա�����ͷ�
	//���������ͷţ�ʹ��delete�ؼ���
	delete p;
	//cout << *p << endl; //�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}
//2.�ڶ�����������
void test02()
{
	//����10���������ݵ����飬�ڶ���
	int* arr = new int[10]; //10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[]arr;
}
int main()
{
	test01(); 
	test02(); 
	return 0;
}