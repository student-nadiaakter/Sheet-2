#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        ++left;
        --right;
    }
    return true;
}

int main() {
    fast_io;

    string str;
    cin >> str; // Input string (without spaces)

    if (isPalindrome(str))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
