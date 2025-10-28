#include <iostream>
using namespace std;
void funtion1(int a, int b);
int funtion2(int a, int b);

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

