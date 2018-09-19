#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число - ";
	int num;
	cin >> num;
	int del = 2;
	while (num > 1) 
	{
		while (num % del == 0)
		{
			if (num == del)
				cout << del;
			else
				cout << del << " * ";
			num = num / del;
		}
		if (del == 2)
			del++;
		else
			del = del + 2;
	}
	system("pause");
	return 0;
}
