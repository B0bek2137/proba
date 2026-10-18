#include <iostream>
using namespace std;
#include <string>
#include <chrono>
#include <thread>
int zdrowie_gracza = 500;
int poziom_gracza = 5;                  
string bron_gracza = "zaklecie";        
int mana_gracza = 10;

int zdrowie_przeciwnika = 200;
string pancerz_przeciwnika = "ciezki pancerz";
int poziom_przeciwnika = 10;
string bron_przeciwnika = "miecz";
void walka()
{
	while (zdrowie_gracza > 0 and zdrowie_przeciwnika > 0)
	{
		int obrazenia_gracza = 0;
		int obrazenia_przeciwnika = 0	;
		if (bron_gracza == "miecz") {
			obrazenia_gracza = 50;
			if (pancerz_przeciwnika == "ciezki pancerz")
				obrazenia_gracza = 30;
		}
		if (bron_gracza == "zaklecie") {
			obrazenia_gracza = 70;
			if (pancerz_przeciwnika == "odporny na zaklecia")
				obrazenia_gracza = 10;
			if (mana_gracza <= 0)
				obrazenia_gracza = 0;
			mana_gracza -= 1;
		}
		if (poziom_przeciwnika - poziom_gracza >= 5)
			obrazenia_gracza = 0.5 * obrazenia_gracza;
		if (bron_przeciwnika == "miecz")
			obrazenia_przeciwnika = 50;
		if (bron_przeciwnika == "zaklecie")
			obrazenia_przeciwnika = 70;
		zdrowie_gracza -= obrazenia_przeciwnika;
		zdrowie_przeciwnika -= obrazenia_gracza;
		cout << "twoje zdrowie to " << zdrowie_gracza << endl;
		cout << "zdrowie przeciwnika to " << zdrowie_przeciwnika << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
	if (zdrowie_gracza <= 0)
		cout << "przegrales" << endl;
	if (zdrowie_przeciwnika <= 0)
		cout << "wygrales" << endl;
}
int main() {
	walka();
	return 0;
}



