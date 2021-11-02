#include <iostream>
using namespace std;

int main() {
    int n, i = 3, f = 1, fn = 1;
    cin >> n;
	while (i <= n) {
		fn += f;
		f = fn - f;
		i++;}
	cout << fn;
	return 0;
}
