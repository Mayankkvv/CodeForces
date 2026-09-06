#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        ll ans = 0;
        ll len = 0;
 
        for (int i = 0; i < n; i++) {
 
            if (arr[i] <= q) {
                len++;
            }
            else {
                if (len >= k) {
                    ll x = len - k + 1;
                    ans += x * (x + 1) / 2;
                }
 
                len = 0;
            }
        }
        if (len >= k) {
            ll x = len - k + 1;
            ans += x * (x + 1) / 2;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}