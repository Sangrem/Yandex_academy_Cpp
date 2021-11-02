#include <iostream>
using namespace std;

int main() {
  int n, i=0;
  while (true){
      cin >> n;
      if (n == 0){
          cout << i;
          break;}
      i = n + i;
  }
  return 0;
}
