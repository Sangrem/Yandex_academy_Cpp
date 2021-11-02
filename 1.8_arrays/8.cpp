#include <iostream>
using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, k;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    int i_k = 0, j_k = 0;

    if (k > 0) {
        // shift down
        i_k += k;
    }
    else if (k < 0) {
        // shift to the right 0 - (-k) = k
        j_k -= k;
    }

    for (int i = i_k, j = j_k; i < n && j < n; ++i, ++j) {
        cout << arr[i][j] << ' ';
    }

    return 0;
}
