// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	char*a = new char[100];
	ifstream file("INPUT.txt");
	ofstream out("OUTPUT.txt");
	file.getline(a, 100);

	char*tmp = a;
	while (!tmp);

	int num = atoi(tmp);
	tmp = strchr(tmp, ' ') + 1;
	int num2 = atoi(tmp);
	cout << num << ' ' << num2 << ' ';

	system("pause");
	return 0;
}



