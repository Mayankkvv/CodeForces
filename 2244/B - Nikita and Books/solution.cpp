#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
 
    int t;
    cin >> t;
    while (t--) {
 
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++){
          cin>>arr[i];
        }
 
        ll prefix = 0;
        bool flag = true;
 
        for (int i = 0; i < n; i++) {
            prefix += arr[i];
            ll need = (i + 1) * (i + 2) / 2; 
            if (prefix < need) flag = false;
        }
 
        cout << (flag ? "YES" : "NO") << "
";
    }
 
    return 0;
}