#include<iostream>
using namespace std;
//#define SQUARE
//#define TRiANGLE_1
//#define TRiANGLE_1
#define TRiANGLE_2
#define TRiANGLE_3
#define TRiANGLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ���������� ���������: "; cin >> n;
#ifdef SQUARE



	for (int i = 0; i < n; i++)  //������ ������
	{
		for (int i = 0; i < n; i++) //������ ��������� �������

		{

			cout << "* ";
		}
		cout << endl; //������� �� ����� ������
	}
#endif // !SSQUARE

#ifdef TRiANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
}
	cout << endl;
#endif
#ifdef TRiANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
#endif
}

