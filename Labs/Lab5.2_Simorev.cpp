// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double A, B, C, AC, BC, Sum;
	cout << "Enter A\n";
	cin >> A;
	cout << "Enter B\n";
	cin >> B;
	cout << "Enter C\n";
	cin >> C;
	AC = abs(A - C);
	BC = abs(B - C);
	Sum = AC + BC;
	cout << "AC = " << AC << endl;
	cout << "BC = " << BC << endl;
	cout << "Sum = " << Sum << endl;

	return 0;
}