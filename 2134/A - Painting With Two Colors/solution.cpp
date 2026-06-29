#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
 
        bool blue = ((n - b) & 1LL) == 0;                 
        bool red   = (a <= b) || (((n - a) & 1LL) == 0);   
 
        cout << (blue && red ? "YES
" : "NO
");
    }
    return 0;
}