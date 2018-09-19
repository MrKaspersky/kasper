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

	cout << "Отгадай число от 1 до 1000" << endl << endl;

	while (k <= 10) 
	{
		cout << "Введи число - ";
		cin >> suppose;

		if (number == suppose) 
		{
			cout << "Вы отгадали число! Браво! Выотгадали число с " << k << " попытки!" << endl << endl << endl;
			system("pause");
			return 0;

		}
		else
		{
			if (suppose < number)
				cout << "Больше!"  << endl << endl;
			else
				cout << "Меньше!"  << endl << endl;
		}

		k++;

	}

	if (k > 10)
		cout << "Вы не отгадали число! Попробуйте в другой раз!" << endl;


	cout << "Эти числом было - " << number;

	system("pause");
	return 0;


}
