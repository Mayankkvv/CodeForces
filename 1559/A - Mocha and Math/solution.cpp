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
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
        ll tot = arr[0];
        for(int i = 1; i < n; i++){
            tot &= arr[i];
        }
        cout<<tot<<endl;
    }
 
    return 0;
}