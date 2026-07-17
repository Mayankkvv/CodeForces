#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n , k;
        cin >> n >> k;
        vector<ll> arr(n*k);
        for(int i = 0; i < n*k; i++){
          cin >> arr[i];
        }
        ll pointer = n*k;
        ll sum = 0;
        while(k--){
          pointer -= (n/2 + 1);
          sum += arr[pointer];
        }
        cout<<sum<<endl;
    }
 
    return 0;
}