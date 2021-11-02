#include <iostream>
using namespace std;

int main() {
  int x, i=1;
  cin >> x;
  while (i * i <= x){
      cout << i * i << " ";
      i = i + 1;}
  return 0;
}
