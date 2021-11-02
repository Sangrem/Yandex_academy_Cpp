#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> A(n);
    int k = 1000;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > 0 && A[i] < k)
        {
            k = A[i];
        }
    }
    cout << k << endl << endl;
}
