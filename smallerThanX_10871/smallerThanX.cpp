#include <iostream>
#define _CRT_SECURE_NOWARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input, x, y;
	cin >> input >> x;
	int* array = new int[input](); //x크기만큼 동적배열할당

	for (int i = 0; i < input; i++) {
		cin >> y;
		if (y < x) {
			array[i] = y;
		}
		else{
			array[i] = 0;
		}
	}
	for (int j = 0; j < input; j++) {
		if (array[j] != 0) { cout << array[j] << " "; }
		else { continue; }
	}
}