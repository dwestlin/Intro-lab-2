// Lab2Uppg1.cpp : R�kna ut antal pythagoreiska trianglar.
// Namn: Daniel Vestlin
// Uppgift: Laboration 2 uppgift 1
// Kurs:  DT018G - Introduktionskurs till programmering c++ 


#include <cmath>
#include <iostream>

using namespace std;
int main()
{

	// Deklarera det namn som ska finnas samt startv�rden.
	int sideA = 0;
	int sideB = 0;
	int sideC = 0;
	int counter = 0;

	cout << " ########################################################## " << endl;
	cout << " BERAKNING AV ANTAL TRIANGLAR SAMT REDOVISNING AV TRIANGLAR " << endl;
	cout << " DAR HYPOTENUSAN HAR VARDE 100, 200, 300, 400 ELLER 500     " << endl;
	cout << endl;


	// B�rja med en for-deklaration d�r Hypotenusan b�rjar eftersom att den alltid �r st�rst. 
	{
		for (sideC = 0; sideC < 500; sideC++)
		{

			// B�rjar med v�rde 0 p� Katet A d�r Hypotenusan alltid ska vara st�rre �n en sida. D�refter plussar vi p� +1
			for (sideA = 0; sideA < sideC; sideA++)
			{

				// Katet B s�tter v�rde Katet A och provar om �ven den �r mindre �n Hypotenusa. 
				// Det sorterar ut att det kan vara samma triangel men olika v�rde p� Katet A och B. 
				for (sideB = sideA; sideB < sideC; sideB++)
				{

					// om Pythagoras sats st�mmer v�ljer vi att k�ra +1 p� r�knare f�r att h�lla koll p� antal trianglar.
					if ((sideA*sideA) + (sideB*sideB) == (sideC*sideC))
					{
						counter = counter++;

						// Om Hypotenusan �r 100, 200, 300, 400 eller 400 ska Sidorna + hypotenusa skrivas ut. 
						if (sideC == 100 || sideC == 200 || sideC == 300 || sideC == 400 || sideC == 500)
						{
							cout << "Sida 1 : " << sideA << endl;
							cout << "Sida 2 : " << sideB << endl;
							cout << "Sida 3 : " << sideC << endl;
							cout << endl;
						}

					}
				}
			}
		}

		cout << endl;
		cout << "Antal Pytagoreiska trianglar ar: " << counter;
		cout << endl;
	}

	system("pause");
	return 0;

}

