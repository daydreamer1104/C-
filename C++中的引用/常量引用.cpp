#include <iostream>
#include <string>
using namespace std;
//��ӡ���ݺ���
void showValue(const int& val)
{
	//val = 1000; //��ֹ�����������const�����βη�ֹ�޸����� 
	cout << "val= " << val;
}
int main()
{
	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	//int a = 10;
	//int& ref = 10; //���ñ�����һ��Ϸ����ڴ�ռ�
	//����const֮�� �������������޸� int temp =10;const int & ref=temp;
	//const int& ref = 10;
	//ref = 20; //����const֮���Ϊֻ���������޸�
	int a = 100;
	showValue(a);
	return 0;
}