#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
 
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }
 
    if (n <= 1) {
        cout << "YES
";
        return;
    }
 
    int l = pos[n];
    int r = pos[n];
 
    for (int k = n - 1; k >= 1; --k) {
        int current_pos = pos[k];
        
        if (current_pos == l - 1) {
            l = current_pos;
        } else if (current_pos == r + 1) {
            r = current_pos;
        } else {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}