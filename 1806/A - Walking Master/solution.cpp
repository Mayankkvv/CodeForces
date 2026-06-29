#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (b > d) {
            cout << -1 << "
";
        } else {
            long long dif = d - b;
 
            if (a + dif < c) {
                cout << -1 << "
";
            } else {
                cout << dif + (a + dif - c) << "
";
            }
        }
    }
 
    return 0;
}