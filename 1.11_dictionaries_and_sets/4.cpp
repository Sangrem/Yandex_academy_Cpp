#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> s;
    int n;

    cin >> n;

    while (cin >> n) {
        if (s.find(n) == s.end()) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        s.insert(n);
    }

    return 0;
}
