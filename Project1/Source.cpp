#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string s;
int choice;
double value, rate;
double rates[] = { 0.97, 4.76, 138.69, 7.13 };

int main() {
	cout << "C++ Currency Converter\n";
	cout << "---------------------------\n\n";

	cout << fixed << setprecision(2);
	cout << "Enter a value in US dollars: ";
	cin >> value;

	cout << "\nSelect a currency:";
	cout << "\n1.Euro\n2.RON\n3.Yen\n4.Yuan\n";
	
	cin >> choice;
	if (choice == 1) {
		rate = 0.97;
		s = "\nEuro: ";
	} else if (choice == 2) {
		rate = 4.76;
		s = "\nRON: ";
	} else if (choice == 3) {
		rate = 138.69;
		s = "\nYen: ";
	} else if (choice == 4) {
		rate = 7.13;
		s = "\nYuan: ";
	}

	cout << "\nUS dollars: ";
	cout << value;
	cout << "\nConversion rate(per US dollar): ";
	cout << rate;
	cout << s;

	value = value * rate;
	cout << value;

	cout << "\n---------------------------\n";
	cout << "End of Currency Converter\n";
	return 0;
}