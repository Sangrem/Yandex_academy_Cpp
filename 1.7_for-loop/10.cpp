#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, t, v;
  cin >> n;
  vector <int> a;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v = 1;
    for (auto j : a) if (j == t) {
      v--;
      break;
    };
    if (v) a.push_back(t);
  };
  cout << a.size();
  return 0;
}
