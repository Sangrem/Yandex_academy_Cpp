#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    cout << ((109 * 1000) + (v * t)) % 109;
    return 0;
}
