//Sort Ascending.cpp
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleOutputCP(1251);
	srand(GetTickCount());
	const int N = 20;
	const int A = -40;
	const int B = 70;
	const int M = 10;
	int k = 0;
	int i, j;
	int x[N];
	SetConsoleTextAttribute(h, 0x09);
	cout << "Mas.\n";
	for (int i = 0; i < N; i++)
	{
		x[i] = A + rand() % (B - A + 1);
		cout << setw(7) << x[i];
		if ((i + 1) % M == 0)
			cout << "\n";
	}

	if (N % M != 0)
		cout << "\n";

	cout << "Sort Ascending \n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				swap(x[j], x[j + 1]);
				cout << setw(7) << x[j];

			} //if
		}	 //for j
	}		  //for i

	SetConsoleTextAttribute(h, 0x07);
	cout << " \n";
	return 0;
}
