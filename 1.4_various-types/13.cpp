#include <iostream>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  if (k <= n * m && ((n * m - k) % n == 0 || (n * m - k) % m == 0)){
      cout << "YES";}
  else{
      cout << "NO";}
  return 0;
}
