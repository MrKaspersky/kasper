#include<cstdlib>
#include<ctime>
#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int k = 1;
	srand(time(NULL));
	double number;
	number = rand() % 1000 + 1;
	int suppose;

	cout << "������� ����� �� 1 �� 1000" << endl << endl;

	while (k <= 10) 
	{
		cout << "����� ����� - ";
		cin >> suppose;

		if (number == suppose) 
		{
			cout << "�� �������� �����! �����! ���������� ����� � " << k << " �������!" << endl << endl << endl;
			system("pause");
			return 0;

		}
		else
		{
			if (suppose < number)
				cout << "������!"  << endl << endl;
			else
				cout << "������!"  << endl << endl;
		}

		k++;

	}

	if (k > 10)
		cout << "�� �� �������� �����! ���������� � ������ ���!" << endl;


	cout << "��� ������ ���� - " << number;

	system("pause");
	return 0;


}
