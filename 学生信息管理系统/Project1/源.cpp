
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
	cout << "������" << name << endl;
	cout << "���֤�ţ�" << ID << endl;
	cout << "ѧ�ţ�" <<number  << endl;
	cout << "רҵ��" <<specialty<< endl;
	cout << "����" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "������������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "���������֤�ţ�";
	cin >> ID;
	cout << "���������䣺";
	cin >> age;
	cout << "������רҵ��";
	cin >> specialty;
	cout << "������ѧ�ţ�";
	cin >> number;
}


