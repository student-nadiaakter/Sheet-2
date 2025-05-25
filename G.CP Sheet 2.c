#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Typedef for large factorials
typedef long long ll;

ll factorial(int n) {
    ll result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    fast_io;

    int n;
    cin >> n; // Input the number

    cout << factorial(n) << '\n';

    return 0;
}
