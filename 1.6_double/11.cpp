#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  double b1=b/a;
    double c1=c/a;
    double b2=b1/2;
    double c2=-c1+b2*b2;
    if (c2==0){ cout << -b2;}
    else {
        if (c2>0){
          cout << -sqrt(c2)-b2 << " " << sqrt(c2)-b2;}
    }
  return 0;
}
