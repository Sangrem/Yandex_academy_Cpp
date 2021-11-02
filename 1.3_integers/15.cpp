#include <iostream>
using namespace std;

int main() {
    int v;
    cin >> v;
    int a = (v/ 1000);
    int s = (v / 100 % 10);
    int d = (v / 10 % 10);
    int f = (v % 10);
    int t = (a - f)*(a - f) + (s - d)*(s - d) + 1;
    cout << t;
    return 0;
}
