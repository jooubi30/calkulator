#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int a, b,c, selection;
	while (true)
	{
		cout << "������� 3 �����" << endl;
		cin >> a >> b>>c ;

		cout << "�������� �������������� ��������" << endl <<
			"1.��������" << endl <<
			"2.���������" << endl <<
			"3.���������" << endl <<
			"4.�������" << endl;

		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << "��������� �������� = " << a + b+c << endl;
			break;

		case 2:
			cout << "��������� ��������� = " << a - b-c << endl;
			break;

		case 3:
			cout << "��������� ��������� = " << a * b*c << endl;
			break;

		case 4:
			cout << "��������� ������� = " << (double)a / b/c << endl;
			break;

		default:
			cout << "������! ����� ���� �����������!" << endl;
			break;
		}
		int z;
		cout << "������ ����������? ������� 1,���� ��,���� ��� ������� 0" << endl;
		cin >> z;
		if (z == 0)
		{
			break;
		}
	}

}