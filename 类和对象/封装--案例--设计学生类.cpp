#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string m_name;
	int m_number;
public:
	void setName(string name)
	{
		m_name = name;
	}
	void setNumber(int number)
	{
		m_number = number;
	}
	void showStudent()
	{
		cout << "������" << m_name << " " << "ѧ�ţ�" << m_number << endl;
	}
};
int main()
{
	Student s1;
	s1.setName("����");
	s1.setNumber(1);
	s1.showStudent();
	return 0;
}  