#include <iostream>

using namespace std;

int main() {
	cout << "1. Square OR 2. Rect? >>>";

	int option;
	cin >> option;

	cout << "What size square? >>>";

	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				cout << "* ";
			}
			else if (option == 2) {
				cout << "**";
			}
			else {
				cout << "Error: Onlt choose 1 or 2!";
			}
			
		}
		cout << endl;
	}
	return 0;
}