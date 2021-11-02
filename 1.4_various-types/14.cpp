#include <iostream>
using namespace std;

int main() {
  int n, m, x, y, p;
  cin >> n >> m >> x >> y;
  p = n * m;
  if (m < n) { p = m; m = n; n = p; }
  if (x < p) { p = x; }
  if (y < p) { p = y; }
  if (n - x < p) { p = n - x; }
  if (m - y < p) { p = m - y; }
  cout << p;
  return 0;
}
