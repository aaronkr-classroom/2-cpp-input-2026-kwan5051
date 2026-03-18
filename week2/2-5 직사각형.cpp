#include <iostream>

using namespace std;

int main() {
	int width, height;

	cout << "직사각형의 가로와 세로의 길이를 입력하시오: ";
	cin >> width;
	cout << "직사각형의 가로와 세로의 길이를 입력하시오: ";
	cin >> height;

	cout << "\n---------------------\n" << endl;

	for (int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}