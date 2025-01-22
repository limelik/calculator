#include <iostream>
using namespace std;

int main() {
	int a, b;
	char yo;

	cout << "add devide hani gumari mi ban ara (or` 1+1): ";
	cin >> a >> yo >> b;

	switch (yo) {
	case '+': cout << (a + b) << endl; break;
	case '-': cout << (a - b) << endl; break;
	case '*': cout << (a * b) << endl; break;
	case '/':
		if (b != 0) {
			cout << (a / b) << endl; break;
		}
		else {
			cout << "mi ban en chi" << endl;
		}
		break;
	default: cout << "hasarak tvabanakan hashvark ara" << endl;

	}
	return 0;
}