#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    cout
        << (t / 3600) % 24
        << ":"
        << ((t / 60) % 60) / 10
        << ((t / 60) % 60) % 10
        << ":"
        << (t % 60) / 10
        << (t % 60) % 10;
    return 0;
}
