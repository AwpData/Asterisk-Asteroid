#include <iostream>
using namespace std;

int main()
{
	int asterisks = 0;
	cout << "How many asterisks will the peak of the mountain be? ";
	cin >> asterisks;
	cout << "\n" << endl;

	for (int x = 0; x <= asterisks; x++) {
		for (int y = 0; y < x; y++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int x = (asterisks - 1); x > 0; x--) {
		for (int y = 0; y < x; y++) {
			cout << "*";
		}
		cout << endl;
	}
}



