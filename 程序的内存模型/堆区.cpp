#include<iostream>
using namespace std;
int* func()
{
	//����new�ؼ��֣����Խ����ݿ��ٵ�����	
	//ָ�뱾��Ҳ��һ���ֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* a = new int(10);
	return a;

}
int main()
{ 
	//�ڶ�����������
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl; 
	cout << *p << endl;
	return 0;
}