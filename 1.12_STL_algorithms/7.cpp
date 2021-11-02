#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

double calc_mean_pts() {
    constexpr int marks = 3;
    vector<int> m;
    double init = 0;

    for (int i = 0; i < marks; ++i) {
        int num;

        cin >> num;
        m.push_back(num);
    }

    return accumulate(m.begin(), m.end(), init) / marks;
}

void fill_vector_pair(vector<pair<pair<string, string>, double>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        string name, surname;
        double mean_pts;

        cin >> surname >> name;
        v.push_back(make_pair(make_pair(surname, name), calc_mean_pts()));
    }
}

bool cmp_pts(const pair<pair<string, string>, double>& f, const pair<pair<string, string>, double>& s) {
    return f.second > s.second;
}

void print_vector_pair(const vector<pair<pair<string, string>, double>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    }
}

int main() {
    int n;
    vector<pair<pair<string, string>, double>> v;

    cin >> n;
    fill_vector_pair(v, n);
    stable_sort(v.begin(), v.end(), cmp_pts);
    print_vector_pair(v);

    return 0;
}
