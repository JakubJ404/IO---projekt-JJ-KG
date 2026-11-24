#include <iostream>
#include <string>

using namespace std;

class abstract Uzytkownik {
private:
	int IDuzytkownika;
protected:
	string nazwa;
	string adres;
	string email;
	string status;
	void zaloguj() {
		cout << "wpisz email:"
			cin >> email;
		cout << endl;
		cout << "wpisz haslo: "
			cin >> haslo;
		cout << endl;
	}
	void wyloguj(){

	}
private:
	void edytujprofil() {

	}
};

class Administrator :protected Uzytkownik {
protected:
	void zarzadzajuzytkownikami() {

	}
	void blokujkonto() {

	}
	void zarzadzaniebazaprzedmiotow() {

	}
};

class Kupujacy :protected Uzytkownik {
private:
	void przegladajprzedmioty() {

	}
	void kupprzedmiot() {

	}
	void dodajdokoszyka() {

	}
};

class Konto :protected Uzytkownik {
private:
	int IDkonta;
	string typkonta;
	date datautworzenia;
	bool zweryfikowane;

	void aktualizujdane() {

	}
};
