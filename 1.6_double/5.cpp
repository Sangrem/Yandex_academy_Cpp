#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, g, res;
  cin >> a >> b >> c;
  g = (a + b + c) / 2;
  res = sqrt(g*(g-a)*(g-b)*(g-c));
  cout << res;
  return 0;
}
