#include <iostream>
using namespace std;

int main() {
    int a, max=0, pred=0;
    cin >> a;
    while (a != 0) {
        if (a >= max) {
            pred = max;
            max = a;}
        else if ((a < max) && (a > pred)) {
            pred = a;}
        cin >> a;}
    cout << pred;
    return 0;
}
