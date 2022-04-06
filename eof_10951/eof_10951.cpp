#include <iostream>
//#include <cstdio>
#define _CRT_SECURE_NOWARNINGS

using namespace std;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;

	while (scanf("%d %d", &a, &b) != -1) {
		printf("%d\n", a + b);
	}
	return 0;
}
//https://st-lab.tistory.com/257