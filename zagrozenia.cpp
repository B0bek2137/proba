#include <iostream>
#include <string>
using namespace std;
double temperatura;
double wiatr;
double widocznosc;
bool opady;
int wynik = 0;
int main()
{
	cout << "podaj temperature" << endl;
	cin >> temperatura;
	cout << "podaj predkosc wiatru" << endl;
	cin >> wiatr;
	cout << "widocznosc" << endl;
	cin >> widocznosc;
	cout << "sa opady?" << endl;
	cin >> opady;
	if (temperatura < -15) {
		cout << " silny mroz" << endl;
		wynik += 1;
	}
	if (wiatr >= 70) {
	cout << "silny wiatr" << endl;
	wynik += 1;
}
if (widocznosc < 100) {
	cout << "ograniczona widocznosc" << endl;
	wynik += 1;
}
if (temperatura < 0 and opady == 1) {
	cout << "oblodzenie" << endl;
	wynik += 1;
}
if (wynik >= 2)
cout << "wiele zagrozen";
	return 0;
}

