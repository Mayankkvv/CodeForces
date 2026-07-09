#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
        int sum  = 0;
        for(int i = 0; i < n; i++){
          sum += arr[i];
        }
        vector<int> prefixSum(n+1, 0);
        for(int i = 1; i <= n; i++){
          prefixSum[i] = prefixSum[i-1] + arr[i -1];
        }
        
        while(q--){
          int l , r , k;
          cin >> l >> r >> k;
          int rem = prefixSum[r] - prefixSum[l-1];
          int add = (r-l+1)*k;
          int tot = sum - rem + add;
          if(tot%2 == 0){
            cout<<"NO
";
          }else{
            cout<<"YES
";
          }
        }
    }
 
    return 0;
}