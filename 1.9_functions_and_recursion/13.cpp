#include <iostream>
using namespace std;

int sum_seq() {
    int num;

    cin >> num;

    return num == 0 ? num : num + sum_seq();
}

int main() {
    cout << sum_seq();

    return 0;
}
