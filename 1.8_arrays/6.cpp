#include <iostream>
using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int i_s, j_s;

    cin >> i_s >> j_s;

    for (int i = 0; i < n; ++i) {
        swap(arr[i][i_s], arr[i][j_s]);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
            if (j != m - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
