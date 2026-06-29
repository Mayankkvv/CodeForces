#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool possible = true;
        for (int r = 0; r < k; r++) {
            int parity = 0;
            for (int pos = r; pos < n; pos += k) {
                parity ^= (s[pos] - '0');
            }
            if (parity) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << '
';
    }
    return 0;
}