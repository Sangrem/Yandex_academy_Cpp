#include <iostream>
using namespace std;

int main() {
    int t1, t2, t3, n1, n2, n3;
    cin >> t1 >> t2 >> t3 >> n1 >> n2 >> n3;
    cout << ((n1 * 3600) + (n2 * 60) + n3) - ((t1 * 3600) + (t2 * 60) + t3);
    return 0;
}
