#include <iostream>
#include <cmath>
using namespace std;

int main() {
		double a, b, c, D, x1, x2;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			cout << "3";
		if (a == 0 && b == 0 && c != 0)
			cout << "0";
		if (a == 0 && b != 0)
			cout << "1 " << -c / b;
		if (a != 0) {
			D = b * b - 4 * a * c;
			x1 = (-b - sqrt(D)) / (2 * a);
			x2 = (-b + sqrt(D)) / (2 * a);
			if (D > 0) {
				if (x1 < x2) cout << "2 " << x1 << " " << x2;
				else cout << "2 " << x2 << " " << x1;}
			if (D == 0)
				cout << "1 " << x1;
			if (D < 0)
				cout << "0";}
	return 0;
}
