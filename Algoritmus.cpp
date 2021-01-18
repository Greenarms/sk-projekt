#include <iostream>
using namespace std;

//Selection Sort Funccia
int selectionSort(int pole[], int n)
{
	int i, j, small, temp;                               // i = na uloženie do pola, začína od indexu 0
	for (i = 0; i < n - 1; i++)
	{
		small = i;
		//najdenie najmensieho nesortovaneho elementu
		for (j = i + 1; j < n; j++)                         //n je veľkosť pola
		{
			if (pole[j] < pole[small])                        // j = pozerá cez nesortované polia
				small = j;
		}

		//vymena s lavim nesortovanym elementom
		temp = pole[i];                                   //temp = dočastné uložisko
		pole[i] = pole[small];
		pole[small] = temp;
	}
}
//Funkcia na zobrazenie polia
void displayArray(int pole[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << pole[i] << " "; cout << "\n";

}
//Main Function
int main() {

	int n;
	cout << "napiste velkost pola\n"; cin >> n;
	int pole[n], e, i, ans;
	cout << "napiste cisla polia\n";

	for (i = 0; i < n; i++)
		cin >> pole[i]; cout << "pole pred zoradenim\n";

	displayArray(pole, n);

	selectionSort(pole, n);

	cout << "pole po zoradeni\n";
	displayArray(pole, n);

  std::cout << "najmensie cislo je " << pole[0] <<endl;
  std::cout << "najvacsie cislo je " << pole[n-1] <<endl;

	return 0;
}
