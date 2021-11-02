#include <iostream>
using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int r_arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < m; ++j) {
            r_arr[j][n - 1 - i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << r_arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
