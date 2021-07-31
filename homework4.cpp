#include <iostream>

using namespace std;

//TASK 1

int main()
{
	setlocale(LC_ALL, "Russian");

	int x, y;

	cout << "Введите два целочисленных числа: " << endl;

	cout << "Введите первое число (x): " << endl;
	cin >> x;

	cout << "Введите второе число (y): " << endl;
	cin >> y;

	for (int i = 0; i <=20; ++i)
	{ 
	    if (x + y >= 10 && x + y <= 20)
	    {
		   cout << " Сумма двух чисел равна (в диапазоне от 10 до 20): " << "true"  <<  " = " << x + y << endl;
		   return true;
	    }

	    else  
	       {
		      cout << " Сумма двух чисел не равна (в диапазоне от 10 до 20): " << "false" << " = " << x + y << endl;
		      return false;
	       }
	}
}	

//TASK 2

int task2()
{
	 int a = 5;
	 int b = 10;

	setlocale(LC_ALL, "Russian");

	cout << "Введите два целочисленных числа: " << endl;

	cout << "Введите первое число (a): " << endl;
	cin >> a;

	cout << "Введите второе число (b): " << endl;
	cin >> b;

	for (int i = 0; i <= 10; ++i)
	{
	     if (a , b == 10 || a + b == 10)
	     {
		   cout << a << " + " << b << " = " << "true" << endl;
		    return true;
	     }
	       else if (a != b || a + b != 10)
	        {
		      cout << a << " + " << b << " != " << "false" << endl;
		      return false;
	         }
	}

}

//TASK 3

	int task3()
{
	setlocale(LC_ALL, "Russian");

	int const  SIZE = { 50 };
	cout << "Вывод нечетных чисел в диапазоне от 1 до 50:\n " << endl;

	for (int i = 0; i <= SIZE; ++i)
	{
		if (i % 2) cout << i << " ";
	}

	cout << " Выведенные числа соответсвуют условиям задания " << endl;
	
	return 0;
}

	//TASK 4

int task4()
{
	setlocale(LC_ALL, "Russian");
	int a;
	bool b = true;

	cout << "Программа проверки простоты числа. Введите любое число (1 не является ни простым ни составным числом): " << endl;
	cin >> a;

	for (int i = 2; i <= sqrt(a); i++) 
	{
		if (a % i == 0)
			b = false;
	}

	if (b == true)
	{ 
		cout << "Число является простым " << endl;
	}
	
	else
	{ 
		cout << "Число не является простым " << endl;
	}
	return 0;
}

//TASK 5

int task5()
{
	setlocale(LC_ALL, "Russian");

	int year;
	cout << "Введите год (от 1 до 3000): " << endl;
	cin >> year;

	
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "Год является високосным " << endl;
		return true;
	}
	else
	{
		cout << "Год не является високосным " << endl;
		return false;
	}
}





