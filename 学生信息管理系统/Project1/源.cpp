
#define _CRT_SECURE_NO_WARNINGS
#include"student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(specialty, spec);
	age = ag;
}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, number);
	strcpy(specialty, per.specialty);
	age = per.age;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char* Student::GetName()
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge()
{
	return age;
}
void Student::Display()
{
	cout << "姓名：" << name << endl;
	cout << "身份证号：" << ID << endl;
	cout << "学号：" <<number  << endl;
	cout << "专业：" <<specialty<< endl;
	cout << "年龄" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "请输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "请输入身份证号：";
	cin >> ID;
	cout << "请输入年龄：";
	cin >> age;
	cout << "请输入专业：";
	cin >> specialty;
	cout << "请输入学号：";
	cin >> number;
}


