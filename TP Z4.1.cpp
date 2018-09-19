#include<iostream>
#include<cmath>

using namespace std;

int resualt;

int factorial(int f)
{
	if (f < 2)  return 1;
	else return f * factorial(f - 1);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;

	cout << "¬ведите число, факториал которого вы хотите найти - ";
	cin >> a;
	cout << a << "! = " << factorial(a) << endl; 
	system("pause");
	return 0;
}