#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> prefix(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            prefix[i] = prefix[i - 1] + x;
        }
 
        vector<int> cuts(m);
 
        for (int i = 0; i < m; i++) {
            cin >> cuts[i];
        }
 
        sort(cuts.begin(), cuts.end());
 
        ll ans = 0;
        ll last = 0;
 
        for (int i = 0; i < m; i++) {
            ll sum = prefix[cuts[i]] - prefix[last];
            ans += abs(sum);
            last = cuts[i];
        }
 
        ans += prefix[n] - prefix[last];
 
        cout << ans << "
";
    }
 
    return 0;
}