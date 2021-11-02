#include <iostream>
using namespace std;

int main() {
	int n, max = 0, c = 0;
	while (cin >> n && n) {
		if (n > max) {
			max = n;
			c = 0;}
		if (n == max) {
			c++;}
		}
	cout << c;
	return 0;
}
