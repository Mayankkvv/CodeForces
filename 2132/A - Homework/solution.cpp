#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b >> c;
 
        string res = a;
        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                res = b[i] + res;  
            } else {
                res += b[i];  
            }
        }
        cout << res << "
";
    }
}