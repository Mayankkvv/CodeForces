#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int mx = 0, cnt = 0;
 
        for (char c : s) {
            if (c == '#') {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }
 
        if (mx == 0)
            cout << 0 <<endl;
        else
            cout << (mx + 1) / 2 <<endl;
    }
 
    return 0;
}