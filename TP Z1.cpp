#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo, kop = 0, rub = 0;
	char R1[] = " ������ ";
	char R2[] = " ����� ";
	char R3[] = " ����� ";
	char K1[] = " ������ ";
	char K2[] = " ������� ";
	char K3[] = " ������� ";
	cout << "������� ����� - ";
	cin >> chislo;
	kop = chislo % 100;
	rub = chislo / 100;
	if (chislo == 0)
		cout << "�����: ������ �� �������. " << endl;
	else
		cout << "�����: ";
	if (rub > 0)
	{
		if (rub % 100 > 10 && rub % 100 < 20)
			cout << rub << R1;
		else if (rub % 10 == 1)
			cout << rub << R2;
		else if (rub % 10 > 1 && rub % 10 < 5)
			cout << rub << R3;
		else
			cout << rub << R1;
	}
	if (kop > 0)
	{
		if (kop % 100 > 10 && kop % 100 < 20)
			cout << kop << K1;
		else if (kop % 10 == 1)
			cout << kop << K2;
		else if (kop % 10 > 1 && kop % 10 < 5)
			cout << kop << K3;
		else
			cout << kop << K1;
	}
	system("pause");
	return 0;
}
