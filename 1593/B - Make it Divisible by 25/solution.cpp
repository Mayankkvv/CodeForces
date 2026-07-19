#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int solve(string s, char a, char b) {
    int n = s.size();
    int j = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == b) {
            j = i;
            break;
        }
    }
    if (j == -1) return 1e9;
    int iPos = -1;
    for (int i = j - 1; i >= 0; i--) {
        if (s[i] == a) {
            iPos = i;
            break;
        }
    }
    if (iPos == -1) return 1e9;
    return (n - 1 - j) + (j - iPos - 1);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = min({
            solve(s, '0', '0'),
            solve(s, '2', '5'),
            solve(s, '5', '0'),
            solve(s, '7', '5')
        });
        cout << ans << '
';
    }
}