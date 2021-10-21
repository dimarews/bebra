// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x, y, Length;
	cout << "Enter x1\n";
	cin >> x1;
	cout << "Enter y1\n";
	cin >> y1;
	cout << "Enter x2\n";
	cin >> x2;
	cout << "Enter y2\n";
	cin >> y2;
	x = (x1 - x2);
	y = (y1 - y2);
	Length = sqrt(x * x + y * y);
	cout << "Length = " << Length << endl;

	return 0;
}