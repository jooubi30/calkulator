#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int a, b,c, selection;
	while (true)
	{
		cout << "Введите 3 числа" << endl;
		cin >> a >> b>>c ;

		cout << "Выберите математическую операцию" << endl <<
			"1.Сложение" << endl <<
			"2.Вычитание" << endl <<
			"3.Умножение" << endl <<
			"4.Деление" << endl;

		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << "Результат сложения = " << a + b+c << endl;
			break;

		case 2:
			cout << "Результат вычитания = " << a - b-c << endl;
			break;

		case 3:
			cout << "Результат умножения = " << a * b*c << endl;
			break;

		case 4:
			cout << "Результат деления = " << (double)a / b/c << endl;
			break;

		default:
			cout << "Ошибка! Пункт меню отсутствует!" << endl;
			break;
		}
		int z;
		cout << "Хотите продолжить? Нажмите 1,если да,если нет нажмите 0" << endl;
		cin >> z;
		if (z == 0)
		{
			break;
		}
	}

}