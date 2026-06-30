#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(auto& x : a) cin >> x;
        for(auto& x : b) cin >> x;
        
        long long prefix = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            prefix += (b[i] - a[i]);
            if(prefix < 0){ ok = false; break; }
        }
        
        cout << (ok ? "YES" : "NO") << "
";
    }
    return 0;
}