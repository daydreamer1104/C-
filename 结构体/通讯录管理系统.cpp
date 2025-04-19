#include<iostream>
#define MAX 1000
using namespace std;
#include<string>
struct Contact //��ϵ�˵Ľṹ��
{
	//����
	string name;
	int gender;
	int age;
	string phonenumber;
	string address;
};
struct Book //ͨѶ¼�ṹ��
{
	  //����ϵ�˽ṹ��ΪԪ�ص����飬�����������Ԫ�ع涨ΪMAX=1000
	Contact contactarray[MAX];
	int size = 0; //ͨѶ¼����ϵ�˵ĸ�������ʼ��Ϊ0
};
void showMenu() //�˵���ʾ
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}
void Add(Book *book) //�����ϵ��
{
	if (book->size ==MAX)   //���ж�ͨѶ¼�����ɸ�����û����
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return; //ֱ���˳�ϵͳ
	}
	else
	{
		//������ϵ�˵���Ϣ
		book->contactarray[book->size].gender = 0;
		cout << "������Ҫ��ӵ���ϵ�˵����֣�";
		cin >> book->contactarray[book->size].name;
		cout << "������ϵ�˵��Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		while (true)
		{
			cin >> book->contactarray[book->size].gender;
			cout << endl;
			if (book->contactarray[book->size].gender == 1 || book->contactarray[book->size].gender == 2) //��1��ʾ�У���2��ʾŮ
			{
				switch (book->contactarray[book->size].gender)
				{
				case 1:
					cout << "�Ա���" << endl;
					break;
				case 2:
					cout << "�Ա�Ů" << endl;
					break;
				}
				break;
			}
			else 
			{
				cout << "����������������������" << endl;
			}
		}
		cout << "���䣺";
		cin >> book->contactarray[book->size].age;
		cout << endl;
		cout << "��ϵ���룺";
		cin >> book->contactarray[book->size].phonenumber;
		cout << endl;
		cout << "��ͥסַ��";
		cin >> book->contactarray[book->size].address;
		cout << endl;
		cout << "��ӳɹ�"; //��ӳɹ���ʾ
		book->size++; //��ʾͨѶ¼�����һ����ϵ�ˣ������ܹ����������һ����ϵ��
		system("pause");
		system("cls");//����
	}
}
//��ʾͨѶ¼����ӵ�������ϵ����Ϣ
void show(Book* book)
{
	if (book->size == 0) //���ж�ͨѶ¼�Ƿ�Ϊ�գ���Ϊ�գ������ͨѶ¼��¼Ϊ�յ���ʾ��Ϣ
	{
		cout << "ͨѶ¼��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < book->size; i++) //��size��Ϊ�������ͨѶ¼����ϵ�˵���Ϣ
		{
			cout << "��" << i + 1 << "����ϵ��" << endl;
			cout << "���֣�" << book->contactarray[i].name << endl;
			switch (book->contactarray[i].gender)
			{
			case 1:
				cout << "�Ա���" << endl;
				break;
			case 2:
				cout << "�Ա�Ů" << endl;
				break;
			default:
				break;
			}
			cout << "���䣺" << book->contactarray[i].age << endl;
			cout << "��ϵ���룺" << book->contactarray[i].phonenumber << endl;
			cout << "��ͥסַ��" << book->contactarray[i].address << endl;
			cout << endl;
		}
		system("pause");
		system("cls");
	}
}
//��֤Ҫ���ҵ���ϵ���Ƿ������ͨѶ¼����
int verify(Book* book,string name1)
{
	for (int i=0;i<book->size;i++)
	{
		if (book->contactarray[i].name == name1) //�������������ȷ���Ƿ����
		{
			return i; //����Ҫ���ҵ���ϵ����ͨѶ¼����ϵ�������Ԫ�ص��±�
		}
	}
	return -1;
}
//�������������ɾ��ͨѶ¼����ϵ��
void Delete(Book* book)
{
	cout << "��������Ҫɾ������ϵ�˵����֣�" << endl;
	string name2;
	cin >> name2;
	int ret = verify(book, name2); //����һ����������verify�����ķ���ֵ
	if (ret == -1) //����ret����ֵȷ��ɾ���Ĳ���
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < book->size; i++) //����ɾ���Ĳ�����ͨ���������±�ϴ����ϵ����Ϣ������֮ǰ����ϵ����Ϣʵ��ɾ���Ĺ���
		{
			book->contactarray[i] = book->contactarray[i + 1];
		}
		book->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
} 
//������ϵ��
void find(Book* book)
{
	cout << "������Ҫ���ҵ���ϵ�ˣ�";
	string name;
	cin >> name;
	int ret = verify(book, name); //ͬ���õ�verify����
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{ 
		//������Ҫ���ҵ���ϵ�ˣ������������Ϣ
		string gender = (book->contactarray[ret].gender == 1 ? "��" : "Ů");
		cout << "��ϵ����Ϣ" << endl;
		cout << "������" << book->contactarray[ret].name << endl;
		cout << "�Ա�" << gender << endl;
		cout << "���䣺" << book->contactarray[ret].age << endl;
		cout << "��ϵ���룺" << book->contactarray[ret].phonenumber << endl;
		cout << "��ͥסַ��" << book->contactarray[ret].address << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void modify(Book* book)
{
	cout << "������Ҫ�޸ĵ���ϵ�ˣ�";
	string name;
	cin >> name;
	int ret = verify(book, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		string gender = (book->contactarray[ret].gender == 1 ? "��" : "Ů");
		cout << "��ϵ��ԭ��Ϣ�� " << "\t";
		cout << "������" << book->contactarray[ret].name << "\t";
		cout << "�Ա�" << gender << endl;
		cout << "���䣺" << book->contactarray[ret].age << "\t";
		cout << "��ϵ���룺" << book->contactarray[ret].phonenumber << "\t";
		cout << "��ͥסַ��" << book->contactarray[ret].address << endl;
		cout << "������Ҫ�޸ĵ���ϵ����Ϣ" << endl;
		cout << "1--����" << endl;
		cout << "2--�Ա�" << endl;
		cout << "3--����" << endl;
		cout << "4--��ϵ����" << endl;
		cout << "5--��ͥסַ" << endl;
		cout << "6--�˳��޸���ϵ�˽���" << endl;
		int option = 0; //�ṩѡ�ѡ��Ҫ�޸ĵ���Ϣ�����˳��޸���ϵ�˽��棬ͨ���ṩһ��������֮����ѡ��ṹʵ��
		string name1; //��ʼ��Ҫ�޸ĵ���Ϣ
		int gender1 = 0;
		int age1;
		string phonenumber1;
		string address1;
		while (true)  //�����Ŀ����ֻ�е��û�����6ʱ��ֹͣѭ�����˳��޸���ϵ�˵Ľ���
		{
			cin >> option;
			switch (option)
			{
			case 1:
				cout << "������ϵ�������֣�";
				cin >> name1;
				book->contactarray[ret].name = name1;
				break;
			case 2:
				cout << "������ϵ�����Ա�";
				while (true) //��ֹ�û����޸��Ա��ʱ������������Ϣ
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
						cout << "����������������������" << endl;
					}
				}
				break;
			case 3:
				cout << "������ϵ�������䣺";
				cin >> age1;
				book->contactarray[ret].age = age1;
				break;
			case 4:
				cout << "������ϵ������ϵ���룺";
				cin >> phonenumber1;
				book->contactarray[ret].phonenumber = phonenumber1;
				break;
			case 5:
				cout << "������ϵ���¼�ͥסַ��";
				cin >> address1;
				book->contactarray[ret].address = address1;
				break;
			default:
				break;
			}
			if (option == 6)
			{
				break; //�˳�ѭ��
			}
		}
	}
	system("pause");
	system("cls");
}
//���ͨѶ¼
void clean(Book* book)
{
	book->size = 0;  //��size����Ϊ0�������ĺ������޷�ʵ�������ܣ���һ�ֽǶȴ�������ͨѶ¼�Ĺ���
	cout << "ͨѶ¼�����";
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
			Add(&book); //ʹ��&book����Ϊ���õ�ַ����
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
		case 0: //����0ʱ�˳�ͨѶ¼����ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
 