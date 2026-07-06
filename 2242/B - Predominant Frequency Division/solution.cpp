#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    
    vector<int> c1(n+1,0), c2(n+1,0), c3(n+1,0);
    for (int i = 0; i < n; i++) {
        c1[i+1] = c1[i] + (a[i]==1);
        c2[i+1] = c2[i] + (a[i]==2);
        c3[i+1] = c3[i] + (a[i]==3);
    }
    
    vector<int> f(n+1);
    for (int i = 0; i <= n; i++) f[i] = c1[i]+c2[i]-c3[i];
    vector<int> sufMax(n+2, INT_MIN);
    for (int i = n-1; i >= 0; i--)  
        sufMax[i] = max(f[i], sufMax[i+1]);
    
    for (int l = 0; l <= n-3; l++) {
        if (c1[l+1] >= c2[l+1] + c3[l+1]) {
            if (l+2 <= n-1 && sufMax[l+2] >= f[l+1]) {
                cout << "YES
";
                return;
            }
        }
    }
    cout << "NO
";
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
}