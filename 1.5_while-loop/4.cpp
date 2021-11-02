#include <iostream>
using namespace std;

int main() {
  int x, i=2;
  cin >> x;
    while (x % i != 0){++i;}
  cout << i;
  return 0;
}
