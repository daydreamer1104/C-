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
		cout << "ÐÕÃû£º" << m_name << " " << "Ñ§ºÅ£º" << m_number << endl;
	}
};
int main()
{
	Student s1;
	s1.setName("ÕÅÈý");
	s1.setNumber(1);
	s1.showStudent();
	return 0;
}  
