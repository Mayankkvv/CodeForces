#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for(int& x : a) cin >> x;
        for(int& x : b) cin >> x;
        
        ll ans = LLONG_MAX;
        bool valid1 = true;
        ll cost1 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){ valid1 = false; break; }
            cost1 += a[i] - b[i];
        }
        if(valid1) ans = min(ans, cost1);
        vector<int> sa = a, sb = b;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        bool valid2 = true;
        for(int i = 0; i < n; i++){
            if(sa[i] < sb[i]){ valid2 = false; break; }
        }
        if(valid2){
            ll sum_a = 0, sum_b = 0;
            for(int x : a) sum_a += x;
            for(int x : b) sum_b += x;
            ans = min(ans, (long long)c + sum_a - sum_b);
        }
        
        cout << (ans == LLONG_MAX ? -1LL : ans) << "
";
    }
    return 0;
}