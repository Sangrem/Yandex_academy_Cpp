#include <iostream>
using namespace std;

int main() {
  int a, b, c;
    cin >> a >> b >> c;
    cout << 3*(a==b && a==c)+2*((a==b && a==c) ^ (a==b || a==c || b==c));
  return 0;
}
