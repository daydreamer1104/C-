#include<iostream>
using namespace std;
struct Hero
{
	string name;
	int age;
	string	gender;
};
//ð�������㷨
void BubbleSort(struct Hero heroArr[], int len)
{
	for (int i = 0; i < len; i++) //��һ��ѭ������ÿѭ��һ�ξͽ�һ�����ֵ�ŵ���������棬����֮��ıȽ��в�����������ֵ
	{
		for (int j = 0; j < len - 1 - i ; j++) //�ڶ���ѭ������ȥ��֮ǰ�����������Ľϴ��ֵ��Ȼ���ʣ�µ�Ԫ�ؽ��бȽϣ���ǰ���Ԫ�ر�������һ��Ԫ�ش�������Ԫ�ؽ���ֵ
		{
			if (heroArr[j].age > heroArr[j + 1].age)
			{
				int temp = heroArr[j].age;
				heroArr[j].age = heroArr[j + 1].age;
				heroArr[j + 1].age = temp;
			}
		}
	}
}
void show(struct Hero heroArr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << heroArr[i].name << "," << heroArr[i].age << "," << heroArr[i].gender << endl;
	}
}
int main()
{
	struct Hero heroArr[5] = { {"����",23,"��"},{"����",22,"��"},{"�ŷ�",20,"��"},{"����",21,"��"},{"����",19,"Ů"} };
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	BubbleSort(heroArr, len);
	show(heroArr, len);
}