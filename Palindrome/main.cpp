#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Palindrome" << endl;
	long long int number; //число, введенное с клавиатуры
	long long int revers = 0; //число записанное наоборот
	cout << "Ввудите число: "; cin >> number;
	
	long long int copy = number; //копируем значение number   чтобы веденное пользователем число осталось неизменным а в процессе деления будем изменять  copy
	while (copy)

	{
		revers *= 10; //освобождаем место для следующего младшего разряда
		revers += copy % 10; //сохраняем младший разряд исходного числа
		copy /= 10; //убираме младший разряд из исходного числа
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}

}