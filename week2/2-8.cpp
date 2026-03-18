#include <iostream>

using namespace std;

int main() {
	int product = 1;

	for(int i = 1; i < 10; i++){
		product *= i;
	}
	cout << "[1, 10) 범위의 정수의 곱: " << product << endl;

	return 0;
}