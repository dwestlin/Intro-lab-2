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
		// deklarationen används för att nollställa reverse-värdet när man väljer att skriva in nytt tal.
		int reversed = 0;

		// Mata in data
		do
		{
			cout << "Skriv in ett femsiffrigt tal: ";
			cin >> num;
			cout << endl;
		
			notOk = num >= 10000 && num <= 99999 ? false : true;
		
			// Om deklarartionen "notOk" inte stämmer ska nedan skrivas ut. 
			if (notOk)
			{
				cout << "Det ar inte ett femsiffrigt tal" << endl;
			}


		} while (notOk);

		temp = num;
		cout << "Du skrev in : " << num << endl;

		// Här vänds talet i motsatt ordning och sparas i reversed.
		do {

			reversed = (reversed * 10) + num % 10;
			num = num / 10;

		} while (num>0);


		cout << "Talet ar" << setw(5) << ":" << setw(6) << reversed << " baklanges" << endl;
		cout << endl;

		// Jämför om temp (ursprungsvärdet är likadant som reversed, dvs om det är palifram)
		if (temp == reversed)
			cout << "Talet ar Palindrom" << endl;
		else
			cout << "Talet ar inte en Palindrom" << endl;


		cout << endl;
		cout << "Vill du kora programmet igen? (Y/N)" << endl;


		// Här ska man skriva in y eller n. Om man skriver in i små bokstäver väljer den att göra de stora.
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


