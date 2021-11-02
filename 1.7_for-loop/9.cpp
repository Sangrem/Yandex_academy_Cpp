#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, min_mod_2 = 0;
    cin >> n;
    vector <int> a;
    // считывание
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    // обработка и вывод
    for (int i = 0; i < n; i++) {
        if ((min_mod_2 > a[i] || min_mod_2 == 0) && a[i] % 2 != 0) {
        min_mod_2 = a[i];
        }
    }
    cout << min_mod_2;
    return 0;
}
