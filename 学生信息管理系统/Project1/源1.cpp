#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"student.h"
const int N = 20;
void menu();
void OutputStu(Student *array);
void IntputStu(Student *array);
int SearchStu(Student *array, char *na);
int counts = 0;
int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "���������ѡ�";
		cin >> choice;
		if(choice>=0&&choice<=3)
			switch (choice)
			{
			case 1:IntputStu(array); break;
			case 2:cout << "����Ҫ�ҵ����֣�" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "���޴��ˣ�" << endl;
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			default:break;
			}
	} while (choice);
	return 0;
}
void menu()
{
	cout << "******1.¼����Ϣ******" <<endl;
	cout << "******2.��ѯ��Ϣ******" << endl;
	cout << "******3.�����Ϣ******" << endl;
	cout << "******4.��    ��******" << endl;
}
void OutputStu(Student *array)
{

	cout << "ѧ��������=" << counts << endl;
	for (int i = 0; i < counts; i++)
		array[i].Display();
}
int SearchStu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	return j;
}
void IntputStu(Student *array)
{
	char ch;
	do
	{
		array[counts].Input();
		counts++;
		cout << "Ҫ���������𣿣�Y or N)" << endl;
		cin >> ch;
	} while (ch=='Y');
}