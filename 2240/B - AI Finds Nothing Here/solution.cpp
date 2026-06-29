#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
const long long PHI = MOD - 1; 
 
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long e1 = ((r - 1) % PHI) * (m % PHI) % PHI;
        long long e2 = ((n - r + 1) % PHI) * ((c - 1) % PHI) % PHI;
        long long exp = (e1 + e2) % PHI;
        
        cout << power(2, exp, MOD) << "
";
    }
    return 0;
}