// Lab2Uppg3.cpp : Defines the entry point for the console application.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num, temp;
	char answer;
	bool notOk = true;

	do
	{
		// deklarationen anv�nds f�r att nollst�lla reverse-v�rdet n�r man v�ljer att skriva in nytt tal.
		int reversed = 0;

		// Mata in data
		do
		{
			cout << "Skriv in ett femsiffrigt tal: ";
			cin >> num;
			cout << endl;
		
			notOk = num >= 10000 && num <= 99999 ? false : true;
		
			// Om deklarartionen "notOk" inte st�mmer ska nedan skrivas ut. 
			if (notOk)
			{
				cout << "Det ar inte ett femsiffrigt tal" << endl;
			}


		} while (notOk);

		temp = num;
		cout << "Du skrev in : " << num << endl;

		// H�r v�nds talet i motsatt ordning och sparas i reversed.
		do {

			reversed = (reversed * 10) + num % 10;
			num = num / 10;

		} while (num>0);


		cout << "Talet ar" << setw(5) << ":" << setw(6) << reversed << " baklanges" << endl;
		cout << endl;

		// J�mf�r om temp (ursprungsv�rdet �r likadant som reversed, dvs om det �r palifram)
		if (temp == reversed)
			cout << "Talet ar Palindrom" << endl;
		else
			cout << "Talet ar inte en Palindrom" << endl;


		cout << endl;
		cout << "Vill du kora programmet igen? (Y/N)" << endl;


		// H�r ska man skriva in y eller n. Om man skriver in i sm� bokst�ver v�ljer den att g�ra de stora.
		// Om man skriver N/n avslutas loopen.
		do
		{
			cin >> answer;
			answer = toupper(answer);
		}

		while (!(answer == 'Y' || answer == 'N'));

	}while (answer == 'Y');



	return 0;
}


