#include <iostream>
#define _CRT_SECURE_NOWARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input, output;
	cin >> input; 
	if (input < 10) { input = input * 10; }

	int count = 0;
	output = input; 

	do{
		output = output % 10 * 10 + (output / 10 + output % 10) % 10;
		cout << output<<"\n";
		count++;

	} while (output != input);

	cout << "\n"<<count;
	cout << count;
	return 0;
}
