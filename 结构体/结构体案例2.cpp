#include<iostream>
using namespace std;
struct Hero
{
	string name;
	int age;
	string	gender;
};
//冒泡排序算法
void BubbleSort(struct Hero heroArr[], int len)
{
	for (int i = 0; i < len; i++) //第一个循环看做每循环一次就将一个最大值放到数组最后面，而在之后的比较中不考虑这个最大值
	{
		for (int j = 0; j < len - 1 - i ; j++) //第二个循环就是去掉之前排序到数组后面的较大的值，然后对剩下的元素进行比较，若前面的元素比它后面一个元素大，则将两个元素交换值
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
	struct Hero heroArr[5] = { {"刘备",23,"男"},{"关羽",22,"男"},{"张飞",20,"男"},{"赵云",21,"男"},{"貂蝉",19,"女"} };
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	BubbleSort(heroArr, len);
	show(heroArr, len);
}