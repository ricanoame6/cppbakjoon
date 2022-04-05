#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int max = ((a > b) && (a > c)) ? a : (b > a) && (b > c) ? b : c;
	int two = (a == b) && (b != c) ? a : (b == c) && (c != a) ? b : c;


	if (a != b && b != c && c != a) {
		cout << max * 100;
	}
	else if (a == b && b != c || a != b && b == c || a == c && c != b) {
		cout << 1000 + 100 * two;
	}
	else if (a == b && b == c && c == a) {
		cout << 10000 + 1000 * a;
	}
}