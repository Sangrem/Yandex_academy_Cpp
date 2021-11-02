#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void fill_vector_pair(vector<pair<int, int>>& v, const int n) {
    for (int i = 0; i < n; ++i) {
        int id, pts;

        cin >> id >> pts;
        v.push_back(make_pair(id, pts));
    }
}

void print_vector_pair(const vector<pair<int, int>>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}

bool comp_pair(const pair<int, int> &f, const pair<int, int> &s) {
    bool first_gr_second = false;

    if (f.second != s.second) {
        first_gr_second = f.second > s.second;
    }
    else {
        first_gr_second = f.first < s.first;
    }

    return first_gr_second;
}

int main() {
    int n;
    vector<pair<int, int>> participant;

    cin >> n;
    fill_vector_pair(participant, n);
    sort(participant.begin(), participant.end(), comp_pair);
    print_vector_pair(participant);

    return 0;
}
