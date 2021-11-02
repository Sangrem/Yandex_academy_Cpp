#include <iostream>
using namespace std;

int main() {
	int n0, n, max = 0;
	bool i = 0;
	cin >> n;
	n0 = n;
	while (cin >> n && n) {
		if (n < n0 && i) {
			max++;
		}
		if (n > n0) {
			i = 1;
		} else {
			i = 0;
		}
		n0 = n;
	}
	cout << max;
return 0;
}
