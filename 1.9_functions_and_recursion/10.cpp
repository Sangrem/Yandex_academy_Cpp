#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int n) {
    int div = 2;

    for (; div < sqrt(n) && n % div != 0; ++div) {
    }

    if (n % div != 0) {
        div = n;
    }

    return div;
}

int main() {
    int n;

    cin >> n;
    cout << MinDivisor(n);

    return 0;
}
