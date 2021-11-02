//Это решение я списал
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m;

    cin >> n >> m;

    int num = 1;
    int k = 0;
    int numbers = n * m;
    int x_max = m, y_max = n;
    int x_min = 0, y_min = 0;
    int x = 0, y = 0;

    // go through array while we do not fill all elements
    while (k < numbers) {
        // go right up to the right border
        for (; x < x_max && k < numbers; ++x, ++k) {
            arr[y][x] = num++;
        }
        // back x one position back
        // and y one position down
        --x;
        ++y;
        // decrease the right border
        --x_max;

        // go down up to the bottom boder
        for (; y < y_max && k < numbers; ++y, ++k) {
            arr[y][x] = num++;
        }

        // back y one position up
        // and x one position left
        --y;
        --x;
        // increase the top border
        ++y_min;

        // go left up to the left border
        for (; x >= x_min && k < numbers; --x, ++k) {
            arr[y][x] = num++;
        }

        // back x one position back
        // and y one position top
        ++x;
        --y;
        // increase the left border
        ++x_min;

        // go up to the top border
        for (; y >= y_min && k < numbers; --y, ++k) {
            arr[y][x] = num++;
        }

        // back y one position back
        // and x one position right
        ++y;
        ++x;
        // decrease the bottom border
        --y_max;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
