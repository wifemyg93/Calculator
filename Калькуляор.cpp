#include <iostream>
using namespace std;

int main()
{
	int num1, num2,res; 
	char i;
	setlocale(0, "");

	cout << "Введите первое число" << endl;
	cin >> num1;

	cout << "Введите второе число" << endl;
	cin >> num2;

	cout << "Введите действие, которое желаете совершить (+,-,*,/,%)" << endl;
	cin >> i;

	if (i == '-')
	{
		res = num1 - num2;
		cout << num1 << "-" << num2 << "=" << res;
	}
	else if (i == '+')
	{
		res = num1 + num2;
		cout << num1 << "+" << num2 << "=" << res;
	}
	else if (i == '*')
	{
		res = num1 * num2;
		cout << num1 << "*" << num2 << "=" << res;
	}
	else if (i == '/')
	{
		res = num1 / num2;
		cout << num1 << "/" << num2 << "=" << res;
	}
	else if (i == '%')
	{
		res = num1 % num2;
		cout << num1 << "%" << num2 << "=" << res;
	}
	else
		cout << "Что-то пошло по одному месту((( Попробуйте еще раз!";
	return 0;

}
