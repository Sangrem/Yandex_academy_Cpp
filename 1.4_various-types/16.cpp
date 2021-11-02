#include <iostream>
using namespace std;

int main()
{
  int x,y,z,x1,y1,z1;
  cin >> x >> y >> z >> x1 >> y1 >> z1;

  if (x>y) swap(x,y);
  if (x>z) swap(x,z);
  if (y>z) swap(y,z);

  if (x1>y1) swap(x1,y1);
  if (x1>z1) swap(x1,z1);
  if (y1>z1) swap(y1,z1);

  if (x==x1 && y==y1 && z==z1) cout << "Boxes are equal";
  else if (x<=x1 && y<=y1 && z<=z1) cout << "The first box is smaller than the second one";
  else if (x>=x1 && y>=y1 && z>=z1) cout << "The first box is larger than the second one";
  else cout << "Boxes are incomparable";

  return 0;
}
