#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll t;
    cin >> t;
 
    while (t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++){
          cin >> arr[i];
        }
        ll max_time = b;
        for(ll i = 0; i < n; i++){
          max_time += min(arr[i] , a -1);
        }
        cout<< max_time << endl;  
    }
 
    return 0;
}