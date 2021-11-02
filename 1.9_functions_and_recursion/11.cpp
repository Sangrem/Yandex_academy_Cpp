#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n) {
    int div = 2;

    while (div < sqrt(n) && n % div != 0) {
        ++div;
    }

    return (n % div != 0 || n == div);
}

int main() {
    int n;

    cin >> n;

    if (IsPrime(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
