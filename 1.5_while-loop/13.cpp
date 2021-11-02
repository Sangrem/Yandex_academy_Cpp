#include <iostream>
using namespace std;

int main() {
    int n, i = 2, f = 1, fn = 1;
    cin >> n;
	while (fn < n){
        fn += f;
        f = fn - f;
        i++;}
        if (fn == n){
            cout << i;}
        else{
            cout << -1;}
	return 0;
}
