#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        vector<long long> c(k);
 
        int cnt2 = 0;
        bool ok = false;
 
        for (int i = 0; i < k; i++) {
            cin >> c[i];
 
            if (c[i] >= 3)
                ok = true;
 
            if (c[i] >= 2)
                cnt2++;
        }
 
        if (ok || cnt2 >= 2)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}