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
		cout << "请输入你的选项：";
		cin >> choice;
		if(choice>=0&&choice<=3)
			switch (choice)
			{
			case 1:IntputStu(array); break;
			case 2:cout << "输入要找的名字：" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人！" << endl;
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
	cout << "******1.录入信息******" <<endl;
	cout << "******2.查询信息******" << endl;
	cout << "******3.浏览信息******" << endl;
	cout << "******4.退    出******" << endl;
}
void OutputStu(Student *array)
{

	cout << "学生总人数=" << counts << endl;
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
		cout << "要继续输入吗？（Y or N)" << endl;
		cin >> ch;
	} while (ch=='Y');
}