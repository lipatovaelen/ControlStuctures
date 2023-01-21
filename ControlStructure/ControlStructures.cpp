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
	cout << "введите температуру воздуха"; cin >> temerature;
	if (temerature > 70)
	{
		cout << "Вы н адругой планете" << endl;
	}
	else if (temerature > 50)
	{
		cout << "вы на экваторе" << endl;
	}
	else if (temerature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temerature > 25)
	{
		cout << "жарко" << endl;
	}
	else if (temerature > 15)
	{
		cout << "тепло" << endl;
	}
	else if (temerature > 5)
	{
		cout << "прохладно" << endl;
	}
	else if (temerature > 0)
	{
		cout << "холодно" << endl;
	}
	else if (temerature > -10)
	{
		cout << "мороз" << endl;
	}
	else if (temerature > -70)
	{
		cout << "сильный мороз" << endl;
	}
	else 
	{
		cout << "вы на другой планете" << endl;
	}
	
#endif

}