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
	Student student[5]; //学生数组
};
//赋予教师信息的函数
void allocate(struct Teacher teacher[], int len)
{
	for (int i = 0; i < len; i++) //第一个循环给老师结构体数组每个元素赋值
	{
		cout << "请输入第 " << i + 1 << " 位老师的名字：";
		cin >> teacher[i].name;
		cout << endl;
		for (int j = 0; j < 5 ; j++) //第二个循环给每个老师的五个学生赋值
		{
			cout << "他的第 " << j+1 << " 个学生的名字：";
			cin >> teacher[i].student[j].name; //i和j体现两个循环的不同作用
			cout << "他的第 " << j+1 << " 个学生的分数：";
			cin >> teacher[i].student[j].score;
		}
	}
}
void show(struct Teacher teacher[], int len)
{
	for (int i = 0; i < len; i++) //第一个循环输出老师结构体数组每个老师元素的值
	{
		cout << "第 " << i + 1 << " 位老师的名字：";
		cout << teacher[i].name;
		cout << endl;
		for (int j = 0; j < 5; j++) //第二个循环给每个老师的五个学生赋值
		{
			cout << "他的第 " << j+1 << " 个学生的名字：";
			cout << teacher[i].student[j].name; //i和j体现两个循环的不同作用
			cout << "   分数：";
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