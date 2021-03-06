//Вариант №2

//Описать структуру с именем aeroflot, содержащую следующие поля:
//1)Название пункта назначения рейса;
//2)Номер рейса(число);
//3)Тип самолета.

//Написать программу, выполняющую следующие действия :
//1)Ввод с клавиатуры данных в массив, состоящий из максимум 7 элементов типа aeroflot, причем сделать возможность прервать ввод, чтобы можно было не вводить все 7 элементов; после окончания ввода отсортировать элементы массива по возрастанию номера рейса;
//2)Вывод в консоль номеров рейсов и типов самолетов, вылетающих в пункт назначения, название которого совпало с названием, введенным с клавиатуры;
//3)Если таких рейсов нет, вывести соответствующее сообщение;
//4)Реализовать вторую версию программы, вместо массива использовать двусвязный список; элементы добавлять таким образом, чтобы сохранялась упорядоченность списка по номеру рейса(вставка нового элемента после элемента, который меньше нового элемента и перед большим элементом).

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct aeroflot
{
	int NomerSamoleta;
	string TipSamoleta;
	string PunktNaznach;
};


bool pred(const aeroflot & lhs, const aeroflot & rhs)
{
	return lhs.NomerSamoleta<rhs.NomerSamoleta;
}

int main()
{
	const size_t StructR(3);
	aeroflot data[StructR];

	cout << "Vvedite Dannie: " << endl;
	for (unsigned i = 0; i < StructR; i++)
	{
		cout << (i + 1) << ": " << endl;

		cout << "Punkt Naznacheniya: " << endl;
		getchar();
		getline(cin, data[i].PunktNaznach);

		cout << "Tip Samoleta: " << endl;
		getline(cin, data[i].TipSamoleta);

		cout << "Nomer Samoleta: " << endl;
		cin >> data[i].NomerSamoleta;

		cin.sync();
		cin.clear();
		cout << endl;
	}
	sort(data, data + StructR, pred);
	for (unsigned long long i = 0; i < StructR; i++)
		cout << "Reys: " << data[i].PunktNaznach << " - " << data[i].NomerSamoleta << "(" << data[i].TipSamoleta << ")" << std::endl;
	string UsPunktNaznach;


	unsigned RezultatCounter(0);
	cout << "Rezultat: " << endl;
	for (unsigned long long i = 0; i < StructR; i++)
	{
		cout << "Vvedite Punkt Naznacheniya: " << endl;
		getline(cin, UsPunktNaznach);
		unsigned RezultatCounter(0);
		for (unsigned long long i = 0; i < StructR; i++)
			if (data[i].PunktNaznach == UsPunktNaznach)
			{
				cout << "Vash Reys: " << data[i].NomerSamoleta << "(" << data[i].TipSamoleta << ")" << endl;
				RezultatCounter++;
			}
	}
	if (!RezultatCounter)
		cout << "Netu Reysov!!!" << endl;

	system("pause");
	return 0;
}