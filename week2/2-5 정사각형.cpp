#include <iostream>

using namespace std;

int main() {
	int size;

	cout << "정사각형의 한 변의 길이를 입력하시오: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
