//FOR
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

/*
	int n; //����������� ��������
	cout << "������� ���������� ���������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	*/
	int n;
	cout << "������� ����� : ";
	cin >> n;

	for (int i = 1; i <= 10; ++i)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
}