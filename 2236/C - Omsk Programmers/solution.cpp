#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;
        vector<pair<long long, long long>> A, B;
        long long cur = a, cost = 0;
        while (true) {
            A.push_back({cur, cost});
            if (cur == 0) break;
            cur /= x;
            cost++;
        }
        cur = b;
        cost = 0;
        while (true) {
            B.push_back({cur, cost});
            if (cur == 0) break;
            cur /= x;
            cost++;
        }
        long long ans = llabs(a - b);
        for (auto &[va, ca] : A) {
            for (auto &[vb, cb] : B) {
                ans = min(ans, ca + cb + llabs(va - vb));
            }
        }
        cout << ans << '
';
    }
    return 0;
}