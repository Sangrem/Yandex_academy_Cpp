#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector <int> a;
    // считывание
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    // обработка
    for (int i = 1; i < n; i = i + 2) {
        temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
    }
    // вывод
        for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}
