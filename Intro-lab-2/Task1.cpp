// Lab2Uppg1.cpp : Räkna ut antal pythagoreiska trianglar.
// Namn: Daniel Vestlin
// Uppgift: Laboration 2 uppgift 1
// Kurs:  DT018G - Introduktionskurs till programmering c++ 


#include <cmath>
#include <iostream>

using namespace std;
int main()
{

	// Deklarera det namn som ska finnas samt startvärden.
	int sideA = 0;
	int sideB = 0;
	int sideC = 0;
	int counter = 0;

	cout << " ########################################################## " << endl;
	cout << " BERAKNING AV ANTAL TRIANGLAR SAMT REDOVISNING AV TRIANGLAR " << endl;
	cout << " DAR HYPOTENUSAN HAR VARDE 100, 200, 300, 400 ELLER 500     " << endl;
	cout << endl;


	// Börja med en for-deklaration där Hypotenusan börjar eftersom att den alltid är störst. 
	{
		for (sideC = 0; sideC < 500; sideC++)
		{

			// Börjar med värde 0 på Katet A där Hypotenusan alltid ska vara större än en sida. Därefter plussar vi på +1
			for (sideA = 0; sideA < sideC; sideA++)
			{

				// Katet B sätter värde Katet A och provar om även den är mindre än Hypotenusa. 
				// Det sorterar ut att det kan vara samma triangel men olika värde på Katet A och B. 
				for (sideB = sideA; sideB < sideC; sideB++)
				{

					// om Pythagoras sats stämmer väljer vi att köra +1 på räknare för att hålla koll på antal trianglar.
					if ((sideA*sideA) + (sideB*sideB) == (sideC*sideC))
					{
						counter = counter++;

						// Om Hypotenusan är 100, 200, 300, 400 eller 400 ska Sidorna + hypotenusa skrivas ut. 
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

