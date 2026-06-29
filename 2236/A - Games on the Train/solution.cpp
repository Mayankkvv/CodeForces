#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            mn = min(mn, h);
            mx = max(mx, h);
        }
        cout << (mx - mn + 1) << '
';
    }
    return 0;
}