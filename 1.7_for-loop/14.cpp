#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;
    vector <int> a;
    vector <int> counts;
    vector <int> val;
    // считывание
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    // обработка
    val.push_back(a[0]);
    counts.push_back(1);

    for (int i = 1; i < n; i++) {
        bool added = false;
        for (int j = 0; j < val.size(); j++) {
            if (val[j] == a[i]) {
                counts[j]++;
                added = true;
            }
        }
        if (not added) {
            val.push_back(a[i]);
            counts.push_back(1);
        }
    }
    // вывод
    for (int j = 0; j < counts.size(); j++) {
        if (counts[j] == 1) {
            cout << val[j] << " ";
        }
    }
    return 0;
}
