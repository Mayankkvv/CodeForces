#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
 
        int tot = 0;
        for(int i = 0; i < n; i++){
          tot ^= arr[i];
        }
        if(n % 2 == 1){
          cout<< tot <<endl;
        }else{
          if(tot == 0){
            cout << tot << endl;
          }else{
            cout << -1 << endl;
          }
        }
    }
 
    return 0;
}