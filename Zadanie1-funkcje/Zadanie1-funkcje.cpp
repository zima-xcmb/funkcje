// Zadanie1-funkcje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool cz1(int n)
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
bool liczba1(int a)
{
	if (a / 1 == 1 && a % 1 == 0) {
		return true;
	}
	return false;
}
bool liczba2(int b)
{
	if (b / 2 == 1 && b % 2 == 0) {
		return true;
	}
	return false;
}

int main()
{
	int licznik1, licznik2, n, cyfra,i2;
	cout << "Podaj liczbe naturalna: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		i2 = i;
		if (cz1(i)) {
			licznik1 = 0;
			licznik2 = 0;
			while (i2 >= 1) {
				cyfra = i2 % 10;
				if (liczba1(cyfra)) {
					licznik1++;
				}
				if (liczba2(cyfra)){
					licznik2++;
				}
				i2 /= 10;


			}
			if ((licznik1 == 1 && licznik2 == 0) || (licznik1 == 0 && licznik2 == 1)) {
				cout << i << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}