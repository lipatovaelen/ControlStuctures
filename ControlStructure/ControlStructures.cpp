//ControlStructures
#include<iostream>
using namespace std;
#define TEMPERATURA
void main()
{
#if defain TEMPERATURA
	setlocale(LC_ALL, "");
	cout << "Hello Controls" << endl;
	int temerature;
	cout << "������� ����������� �������"; cin >> temerature;
	if (temerature > 70)
	{
		cout << "�� � ������� �������" << endl;
	}
	else if (temerature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temerature > 35)
	{
		cout << "����� �����" << endl;
	}
	else if (temerature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temerature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temerature > 5)
	{
		cout << "���������" << endl;
	}
	else if (temerature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temerature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temerature > -70)
	{
		cout << "������� �����" << endl;
	}
	else 
	{
		cout << "�� �� ������ �������" << endl;
	}
	
#endif

}