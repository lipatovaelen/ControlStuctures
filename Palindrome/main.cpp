#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Palindrome" << endl;
	long long int number; //�����, ��������� � ����������
	long long int revers = 0; //����� ���������� ��������
	cout << "������� �����: "; cin >> number;
	
	long long int copy = number; //�������� �������� number   ����� �������� ������������� ����� �������� ���������� � � �������� ������� ����� ��������  copy
	while (copy)

	{
		revers *= 10; //����������� ����� ��� ���������� �������� �������
		revers += copy % 10; //��������� ������� ������ ��������� �����
		copy /= 10; //������� ������� ������ �� ��������� �����
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}

}