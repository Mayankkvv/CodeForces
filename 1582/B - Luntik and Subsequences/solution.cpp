#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];
        ll cnt_zero = 0;
        ll cnt_one = 0;
        for(ll i = 0; i < n; i++){
          if(arr[i] == 0) cnt_zero++;
          if(arr[i] == 1) cnt_one++;
        }
        ll way = pow(2, cnt_zero)*cnt_one;
        cout<<way<<endl;
    }
 
    return 0;
}