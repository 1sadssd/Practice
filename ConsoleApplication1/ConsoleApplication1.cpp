#include <iostream>
#include <Windows.h>
using namespace std;


int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/*Зарплата менеджера — 100$ + 5% від продажів. Користувач вводить з клавіатури загальну суму угод
менеджера за місяць. Порахувати підсумкову зарплату
менеджера.*/
/*
double zp = 100;
double ygody;
double summa;

cout << "Зарплата менеджера без угод = " << zp << "" << '$';
cout << "\n";
cout << "Введіть загальну сумум угод : ";
cin >> ygody;
cout << "\n";

summa = (ygody + ygody / 100 * 5);

cout << "Зарплата з угодами = " << summa << "" << '$';

return 0;
*/


/*Пользователь вводит число. Определить, является ли оно четным.*/

/*
	int chislo;
	cout << "Ведіть число : ";
	cin >> chislo;

	if (chislo%2)
	{
		cout << "Число  не парне ";
	}
	else
	{
		cout << "Число  парне";
	}
	*/

	/*Пользователь вводит два числа. Вывести на
	экран меньшее из этих чисел.*/

	/*
	int first, second;

	cout << "Ведіть перше число : ";
	cin >> first;
	cout << "\n";
	cout << "Ведіть друге число : ";
	cin >> second;

	if (first>second)
	{
		cout << "Більшим є " << second;
	}
	else
	{
		cout << "Меншим є  " << first;
	}
	*/

	/*Пользователь вводит число. Определить, положительное это число, отрицательное или равно нулю.*/

	/*
	int chislo;

	cout << "Ведіть число ";
	cin >> chislo;

	if (chislo>0)
	{
		cout << "Число більше 0 ";
	}
	else if(chislo<0)
	{
		cout << "Число менше 0 ";
	}
	else if(chislo==0)
	{
		cout << "Число дорівнює 0 ";
	}
	*/


	/*Пользователь с клавиатуры вводит 5 оценок
студента. Определить, допущен ли студент к экзамену.
Студент получает допуск, если его средний балл 4 балла
и выше.*/
/*
	int mark1, mark2, mark3, mark4, mark5;
	double dopusk;
	cout << "Ведіть 1-шу оцінку студента : ";
	cin >> mark1;
	cout << "Ведіть 2-гу оцінку студента : ";
	cin >> mark2;
	cout << "Ведіть 3-тю оцінку студента : ";
	cin >> mark3;
	cout << "Ведіть 4-ту оцінку студента : ";
	cin >> mark4;
	cout << "Ведіть 5-ту оцінку студента : ";
	cin >> mark5;

	dopusk = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
	cout << "\n";
	if (dopusk>=4)
	{
		cout << "Студент допущений до екзамена!!!";
	}
	else if(dopusk<4)
	{
		cout << "Студент не допущений до екзамена!!!";
	}

	*/
	/*Пользователь вводит с клавиатуры число. Если
	оно четное, умножить его на три, иначе — поделить на
	два. Результат вывести на экран.*/

	/*	int chislo;

		cout << "Введіть число ";
		cin >> chislo;
		if (chislo%2)
		{
			chislo=chislo/2;
			cout << "Число  не парне " << chislo;
		}
		else
		{
			chislo=chislo *3 ;
			cout << "Число парне " << chislo;

		}
	*/

	/*Написать программу-калькулятор. Пользователь
	вводит два числа и выбирает арифметическое действие.
	Вывести на экран результат*/

	/*float A, B, RES;
	cout << "Введіть перше число: ";
	cin >> A;
	cout << "Введіть друге число: ";
	cin >> B;
	char action;
	cout << "\n\tВиберіть дію:\n";
	cout << "\n + \n";
	cout << "\n - \n";
	cout << "\n * \n";
	cout << "\n / \n";
	cout << "\n";
	cin >> action;
	switch (action) {
	case '+':
		RES = A + B;
		cout << "\n" << RES << "\n";
		break;
	case '-':
		RES = A - B;
		cout << "\n" << RES << "\n";
		break;
	case '*':
		RES = A * B;
		cout << "\n" << RES << "\n";
		break;
	case '/':
		if (B) {
			RES = A / B;
			cout << "\n" << RES << "\n";
		}
		else {
			cout << "\nПомилка!!! Ділення на нуль!!!!\n";
		}
		break;
	default:
		cout << "\nError!!! This operator isn't "
			"correct\n";
		break;
	}
	return 0;

	*/


	/* Пользователь вводит два числа.Определить,
		равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.*/
		/*
			int first, second;
			cout << "Введіть 2 числа ";
			cin >> first;
			cin >> second;

			if (first==second)
			{
				cout << "Числ рівні !";
			}
			else if (first>second)
			{
				cout << first<< " " << second;
			}
			else
			{
				cout << second << " " << first;
			}
			*/


}
