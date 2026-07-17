#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
 
        vector<ll> arr(n);
 
        ll sum = 0;
        ll maxi = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            maxi += (arr[i] + x - 1) / x;
        }
 
        cout << (sum + x - 1) / x << " " << maxi << '
';
    }
 
    return 0;
}