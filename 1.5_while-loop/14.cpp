#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int n_max = 0;
    int curr = -1;
    int prev = -1;
    while (cin >> curr && curr != 0) {
        if (prev != -1) {
            if (curr == prev) {
                n++; }
            else {
                if (n_max < n) {
                    n_max = n;}
                n = 1;}
        }
        prev = curr;}
    if (n > n_max) {
        n_max = n;}
    cout << n_max;
    return 0;
}
