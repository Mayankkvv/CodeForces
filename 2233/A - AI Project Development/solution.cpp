#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long time1 = (n + (x + y) - 1) / (x + y);
 
        long long time2;
        long long lines_during_setup = x * z;
        
        if (lines_during_setup >= n) {
            time2 = (n + x - 1) / x;
        } else {
            long long remaining = n - lines_during_setup;
            long long combined = x + 10 * y;
            time2 = z + (remaining + combined - 1) / combined;
        }
        
        cout << min(time1, time2) << "
";
    }
    
    return 0;
}