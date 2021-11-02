#include <iostream>
using namespace std;

int min(int a, int b);
int min4(int a, int b, int c, int d);

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);

    return 0;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min4(int a, int b, int c, int d) {
    int min_f = min(a, b);
    int min_s = min(c, d);

    return min(min_f, min_s);
}
