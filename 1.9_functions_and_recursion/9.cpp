#include <iostream>
using namespace std;

double power(double x, int n) {
    double res = 1;

    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    while (--n >= 0) {
        res *= x;
    }

    return res;
}

int main() {
    double a;
    int n;

    cin >> a >> n;

    cout << power(a, n) << endl;

    return 0;
}
