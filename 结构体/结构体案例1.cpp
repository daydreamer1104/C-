#include <iostream>
using namespace std;
struct Student
{
	int score;
	string name;
};	
struct Teacher
{
	string name;
	Student student[5]; //ѧ������
};
//�����ʦ��Ϣ�ĺ���
void allocate(struct Teacher teacher[], int len)
{
	for (int i = 0; i < len; i++) //��һ��ѭ������ʦ�ṹ������ÿ��Ԫ�ظ�ֵ
	{
		cout << "������� " << i + 1 << " λ��ʦ�����֣�";
		cin >> teacher[i].name;
		cout << endl;
		for (int j = 0; j < 5 ; j++) //�ڶ���ѭ����ÿ����ʦ�����ѧ����ֵ
		{
			cout << "���ĵ� " << j+1 << " ��ѧ�������֣�";
			cin >> teacher[i].student[j].name; //i��j��������ѭ���Ĳ�ͬ����
			cout << "���ĵ� " << j+1 << " ��ѧ���ķ�����";
			cin >> teacher[i].student[j].score;
		}
	}
}
void show(struct Teacher teacher[], int len)
{
	for (int i = 0; i < len; i++) //��һ��ѭ�������ʦ�ṹ������ÿ����ʦԪ�ص�ֵ
	{
		cout << "�� " << i + 1 << " λ��ʦ�����֣�";
		cout << teacher[i].name;
		cout << endl;
		for (int j = 0; j < 5; j++) //�ڶ���ѭ����ÿ����ʦ�����ѧ����ֵ
		{
			cout << "���ĵ� " << j+1 << " ��ѧ�������֣�";
			cout << teacher[i].student[j].name; //i��j��������ѭ���Ĳ�ͬ����
			cout << "   ������";
			cout << teacher[i].student[j].score;
			cout << endl;
		}
	}
}
int main()
{
	struct Teacher teacher[3];
	int len = sizeof(teacher) / sizeof(teacher[0]);
	allocate(teacher, len);
	show(teacher, len);
}