#include<iostream>
#define MAX 1000
using namespace std;
#include<string>
struct Contact //联系人的结构体
{
	//属性
	string name;
	int gender;
	int age;
	string phonenumber;
	string address;
};
struct Book //通讯录结构体
{
	  //以联系人结构体为元素的数组，数组最大容纳元素规定为MAX=1000
	Contact contactarray[MAX];
	int size = 0; //通讯录里联系人的个数，初始化为0
};
void showMenu() //菜单显示
{
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}
void Add(Book *book) //添加联系人
{
	if (book->size ==MAX)   //先判断通讯录的容纳个数有没有满
	{
		cout << "通讯录已满，无法添加" << endl;
		return; //直接退出系统
	}
	else
	{
		//输入联系人的信息
		book->contactarray[book->size].gender = 0;
		cout << "输入您要添加的联系人的名字：";
		cin >> book->contactarray[book->size].name;
		cout << "输入联系人的性别" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		while (true)
		{
			cin >> book->contactarray[book->size].gender;
			cout << endl;
			if (book->contactarray[book->size].gender == 1 || book->contactarray[book->size].gender == 2) //用1表示男，用2表示女
			{
				switch (book->contactarray[book->size].gender)
				{
				case 1:
					cout << "性别：男" << endl;
					break;
				case 2:
					cout << "性别：女" << endl;
					break;
				}
				break;
			}
			else 
			{
				cout << "您的输入有误，请重新输入" << endl;
			}
		}
		cout << "年龄：";
		cin >> book->contactarray[book->size].age;
		cout << endl;
		cout << "联系号码：";
		cin >> book->contactarray[book->size].phonenumber;
		cout << endl;
		cout << "家庭住址：";
		cin >> book->contactarray[book->size].address;
		cout << endl;
		cout << "添加成功"; //添加成功提示
		book->size++; //表示通讯录添加了一个联系人，并且能够继续添加下一个联系人
		system("pause");
		system("cls");//清屏
	}
}
//显示通讯录中添加的所有联系人信息
void show(Book* book)
{
	if (book->size == 0) //先判断通讯录是否为空，若为空，则输出通讯录记录为空的提示信息
	{
		cout << "通讯录记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < book->size; i++) //把size作为上限输出通讯录中联系人的信息
		{
			cout << "第" << i + 1 << "个联系人" << endl;
			cout << "名字：" << book->contactarray[i].name << endl;
			switch (book->contactarray[i].gender)
			{
			case 1:
				cout << "性别：男" << endl;
				break;
			case 2:
				cout << "性别：女" << endl;
				break;
			default:
				break;
			}
			cout << "年龄：" << book->contactarray[i].age << endl;
			cout << "联系号码：" << book->contactarray[i].phonenumber << endl;
			cout << "家庭住址：" << book->contactarray[i].address << endl;
			cout << endl;
		}
		system("pause");
		system("cls");
	}
}
//验证要查找的联系人是否存在于通讯录当中
int verify(Book* book,string name1)
{
	for (int i=0;i<book->size;i++)
	{
		if (book->contactarray[i].name == name1) //根据输入的姓名确定是否存在
		{
			return i; //返回要查找的联系人在通讯录中联系人数组的元素的下标
		}
	}
	return -1;
}
//根据输入的名字删除通讯录的联系人
void Delete(Book* book)
{
	cout << "请输入您要删除的联系人的名字：" << endl;
	string name2;
	cin >> name2;
	int ret = verify(book, name2); //创立一个变量接收verify函数的返回值
	if (ret == -1) //根据ret返回值确定删除的操作
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < book->size; i++) //这里删除的操作：通过用数组下标较大的联系人信息覆盖它之前的联系人信息实现删除的功能
		{
			book->contactarray[i] = book->contactarray[i + 1];
		}
		book->size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
} 
//查找联系人
void find(Book* book)
{
	cout << "输入您要查找的联系人：";
	string name;
	cin >> name;
	int ret = verify(book, name); //同样用到verify函数
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{ 
		//若存在要查找的联系人，则输出他的信息
		string gender = (book->contactarray[ret].gender == 1 ? "男" : "女");
		cout << "联系人信息" << endl;
		cout << "姓名：" << book->contactarray[ret].name << endl;
		cout << "性别：" << gender << endl;
		cout << "年龄：" << book->contactarray[ret].age << endl;
		cout << "联系号码：" << book->contactarray[ret].phonenumber << endl;
		cout << "家庭住址：" << book->contactarray[ret].address << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人
void modify(Book* book)
{
	cout << "输入您要修改的联系人：";
	string name;
	cin >> name;
	int ret = verify(book, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		string gender = (book->contactarray[ret].gender == 1 ? "男" : "女");
		cout << "联系人原信息： " << "\t";
		cout << "姓名：" << book->contactarray[ret].name << "\t";
		cout << "性别：" << gender << endl;
		cout << "年龄：" << book->contactarray[ret].age << "\t";
		cout << "联系号码：" << book->contactarray[ret].phonenumber << "\t";
		cout << "家庭住址：" << book->contactarray[ret].address << endl;
		cout << "输入您要修改的联系人信息" << endl;
		cout << "1--姓名" << endl;
		cout << "2--性别" << endl;
		cout << "3--年龄" << endl;
		cout << "4--联系号码" << endl;
		cout << "5--家庭住址" << endl;
		cout << "6--退出修改联系人界面" << endl;
		int option = 0; //提供选项，选择要修改的信息或者退出修改联系人界面，通过提供一个变量，之后用选择结构实现
		string name1; //初始化要修改的信息
		int gender1 = 0;
		int age1;
		string phonenumber1;
		string address1;
		while (true)  //这里的目的是只有当用户输入6时才停止循环，退出修改联系人的界面
		{
			cin >> option;
			switch (option)
			{
			case 1:
				cout << "输入联系人新名字：";
				cin >> name1;
				book->contactarray[ret].name = name1;
				break;
			case 2:
				cout << "输入联系人新性别：";
				while (true) //防止用户在修改性别的时候输入错误的信息
				{
					cin >> gender1;
					if (gender1 == 1)
					{
						book->contactarray[ret].gender = gender1;
						break;
					}
					else if (gender1 == 2)
					{
						book->contactarray[ret].gender = gender1;
						break;
					}
					else
					{
						cout << "您的输入有误，请重新输入" << endl;
					}
				}
				break;
			case 3:
				cout << "输入联系人新年龄：";
				cin >> age1;
				book->contactarray[ret].age = age1;
				break;
			case 4:
				cout << "输入联系人新联系号码：";
				cin >> phonenumber1;
				book->contactarray[ret].phonenumber = phonenumber1;
				break;
			case 5:
				cout << "输入联系人新家庭住址：";
				cin >> address1;
				book->contactarray[ret].address = address1;
				break;
			default:
				break;
			}
			if (option == 6)
			{
				break; //退出循环
			}
		}
	}
	system("pause");
	system("cls");
}
//清空通讯录
void clean(Book* book)
{
	book->size = 0;  //将size设置为0后，其他的函数则无法实现自身功能，从一种角度达成了清空通讯录的功能
	cout << "通讯录已清空";
	system("pause");
	system("cls");
}
int main()
{
	Book book;  
	book.size = 0;
	while (true)
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			Add(&book); //使用&book是因为采用地址传递
			break;
		case 2:
			show(&book);
			break;
		case 3:
			Delete(&book);
			break;
		case 4:
			find(&book);
			break;
		case 5:
			modify(&book); 
			break;
		case 6:
			clean(&book);
			break; 
		case 0: //输入0时退出通讯录管理系统
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
 