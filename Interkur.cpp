#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#define laenge 10

int summe(int produkte[], int *max);
void eingabe (int produkte []);
using namespace std;

int main()

{

    cout<<"\nWillkommen bei Interkur!";

    int produkte[laenge] = {0};

    int max = 0;

    eingabe(produkte);

    cout << "\n\nSumme: " << summe(produkte, &max) << "\n";

    cout << "Max: " << max << "\n";

    return 0;

}


void eingabe (int produkte [])
{
    for (int i = 0; i < laenge; i++)

    cout<<"\nBitte geben Sie den Wert des Produktes an: "<< produkte[laenge];
    cin>>produkte[laenge];





}





int summe(int produkte[], int *max)

{

    int summe = 0;

    *max = produkte[0];

    for (int i = 0; i < laenge; i++)

    {

        summe += produkte[i];

        if (produkte[i] > *max)

            *max = produkte[i];

    }

    return summe;

}
