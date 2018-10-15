// Lab2Uppg2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int row;
	char ch;

	//Formatering av celler så att programmet blir snyggt.
	cout << right;
	cout << "#######################################################################" << endl;
	cout << "#######PROGRAM SOM VISAR VILKEN SYMBOL VARJE SIFFRA HAR I ASCII-KOD####" << endl;
	cout << "#######################################################################" << endl;
	cout << endl;

	// den börjar med en for-loop där row deklareras från 32-64 innan den avslutas och sen plussas värdet row på med ett. 
	// Inne i loopen skrivs varje kolumn ut där den först presenterar siffran sen vilken ASCII-symbol den avser
	for (row = 32; row < 64; row++)
	{

		cout << setw(1) << row << setw(3) << char(row);
		cout << setw(8) << 32 + row << setw(3) << char(64 + row);
		cout << setw(8) << 64 + row << setw(3) << char(64 + row);
		cout << setw(8) << 96 + row << setw(3) << char(96 + row);
		cout << setw(8) << 128 + row << setw(3) << char(128 + row);
		cout << setw(8) << 160 + row << setw(3) << char(160 + row);
		cout << setw(8) << 192 + row << setw(3) << char(192 + row) << endl;

	}

	system("pause");
	return 0;
}

