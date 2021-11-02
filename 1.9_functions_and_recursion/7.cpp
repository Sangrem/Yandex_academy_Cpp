#include <iostream>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    bool in_circle = (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;

    return in_circle;
}

int main() {
    double x, y, xc, yc, r;

    cin >> x >> y >> xc >> yc >> r;

    if (IsPointInCircle(x, y, xc, yc, r)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
