#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const char *first, const char *last) {
    if (first < last) {
        if (*first != *last) {
            return false;
        }
        return is_palindrome(first + 1, last - 1);
    }

    return true;
}

int main() {
    string s;

    cin >> s;

    if (is_palindrome(&s[0], &s[s.size() - 1])) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
