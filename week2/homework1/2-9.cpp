#include <iostream>

using namespace std;

int main() {

	int num1, num2;
	cout << "첫 번째 숫자를 입력하시오: ";
	cin >> num1;
	cout << "두 번째 숫자를 입력하시오: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "큰 수: " << num1 << endl;
	} else if(num1 < num2) {
		cout << "큰 수: " << num2 << endl;
	} else {
		cout << "두 숫자는 같습니다." << endl;
	}

	return 0;
}