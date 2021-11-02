#include <iostream>
#include <vector>
using namespace std;

bool promising(const vector<int>& field, int queen_num, int pos) {
    for (int j = 0; j < queen_num; ++j) {
        if (field[j] == pos || j - field[j] == queen_num - pos || j + field[j] == queen_num + pos) {
            return false;
        }
    }

    return true;
}
void queens(vector<int>& field, int queen_num, int& cnt) {
    if (queen_num == field.size()) {
        ++cnt;
    }
    else {
        for (int i = 0; i < field.size(); ++i) {
            if (promising(field, queen_num, i)) {
                field[queen_num] = i;
                queens(field, queen_num + 1, cnt);
            }
        }
    }
}

int main() {
    const int first_queen = 0;
    int n;
    vector<int> v;
    int cnt = 0;

    cin >> n;
    v = vector<int>(n);
    queens(v, first_queen, cnt);
    cout << cnt;

    return 0;
}
