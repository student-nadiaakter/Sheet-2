#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;

    int n;
    cin >> n; // Input the number for which the multiplication table is required

    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << '\n';
    }

    return 0;
}
