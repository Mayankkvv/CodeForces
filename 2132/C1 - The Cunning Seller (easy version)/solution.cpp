#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
 
        vector<int> d;
        long long tmp = n;
        while (tmp > 0) {
            d.push_back(int(tmp % 3));
            tmp /= 3;
        }
        if (d.empty()) d.push_back(0); 
 
        long long cost = 0;
        long long pow3 = 1; 
        for (int x = 0; x < (int)d.size(); ++x) {
            int cnt = d[x];              
            if (cnt) {
                long long term1 = pow3 * 3;          
                long long term2 = (x == 0) ? 0LL
                                              : (long long)x * (pow3 / 3);
                cost += (long long)cnt * (term1 + term2);
            }
            pow3 *= 3; 
        }
 
        cout << cost << '
';
    }
    return 0;
}