#include <iostream>
using namespace std;

/*
int silna(unsigned int n);
int main() {//zadanie 6
	unsigned int n;
	cout << "Wprowadz liczbe naturalna (n): ";
	cin >> n;
	cout << "2 do potegi " << n << " wynosi: " << silna(n) << endl;

	return 0;
}
int silna(unsigned int n) {
	int wynik = 1;
	for (unsigned int i = 0; i < n; i++) {
		wynik = wynik * 2;
	}
	return wynik;
}
*/

/*
void silna(unsigned int n);

int main() {//zadanie 5
	unsigned int n;
	cout << "Wprowadz liczbe naturalna (n): ";
	cin >> n;
	silna(n);
	return 0;
}

void silna(unsigned int n){
	unsigned int wynik = 1;

	for (int i = 1; i <= n; i++) {
		wynik = wynik * i;
	}
	cout << "Silnia z liczby " << n << " wynosi: " << wynik << endl;
}
*/

/*
void potegowanie(unsigned int a, unsigned int b);

int main() {//zadanie 4
	unsigned int a, b;
	cout << "Podaj dwie zmienne calkowite dodatnie: " << endl;
	cin >> a >> b;
	potegowanie(a, b);

	return 0;
}

void potegowanie(unsigned int a, unsigned int b){
	unsigned int c = a ;
	for (int i = 1; b > i;i++) {
		a = a * c;
	}
	cout << "Wynik potegowania: " << a << endl;
}
*/

/*
void dodawanie(float a, float b);
void odejmowanie(float a, float b);
void mnozenie(float a, float b);
void dzielenie(float a, float b);

int main() {//zadanie 3

	float a, b;
	char c;
	while (true) {

		bool n;
		cout << "Podaj pierwsza liczbe: " << endl;
		cin >> a;
		cout << "Podaj druga liczbe: " << endl;
		cin >> b;
		cout << "Wybierz znak operacji (+, -, *, /): " << endl;
		cin >> c;

		if (c == '+') {
			dodawanie(a, b);
		}
		else if (c == '-') {
			odejmowanie(a, b);
		}
		else if (c == '*') {
			mnozenie(a, b);
		}
		else if (c == '/') {
			dzielenie(a, b);
		}
		cout << "Czy chesz kontynuowac? (1/0)" << endl;
		cin >> n;
		if (n == 0) {
			break;
		}
	}
	return 0;
}
void dodawanie(float a, float b) {
	cout << "Wynik dodawania: " << a + b << endl;
}
void odejmowanie(float a, float b) {
	cout << "Wynik odejmowania: " << a - b << endl;
}
void mnozenie(float a, float b) {
	cout << "Wynik mnozenia: " << a * b << endl;
}
void dzielenie(float a, float b) {
	if (b != 0) {
		cout << "Wynik dzielenia: " << a / b << endl;
	}
	else {
		cout << "Blad: Dzielenie przez zero!" << endl;
	}
}
*/

/*
void dzielnik(int a, int b); 

int main()//zadanie 2
{
	unsigned int n;
	cout << "Wprowadz liczbe calkowita dodatnia (n): ";
	cin >> n;
	dzielnik(n, n/2);

	return 0;
}

void dzielnik(int a, int b){
	for (int i = 1;i<=b; i++) {
		if (a % i == 0) {
			cout << "Dzielnik liczby " << a << " to: " << i << endl;
		}
	}
}
*/


/*
void funtion1(int a, int b);
int funtion2(int a, int b);
//zadanie 1

int main()
{
	int a, b;

	cout<<"Wprowadz pierwsza zmienna (a)"<< endl;
	cin >> a;
	cout << "Wprowadz druga zmienna (b)" << endl;
	cin >> b;


	cout<<"Pierwsza funkcja" <<endl;
	funtion1(a, b);
	cout << "Wieksza liczba jest (funkcja 2): " << funtion2(a, b) << endl;
}

void funtion1(int a, int b) {
	if (a > b) {
		cout << "a wieksza od b\n";
	}
	else if (a < b) {
		cout << "b wieksza od a\n";
	}
	else {
		cout << "a rowne b\n";
	}
}
int funtion2(int a, int b) {
	if (a > b) {
		return a;

	}else if (b > a) {
		return b;

	}else {
		return 0;

	}
}
*/

