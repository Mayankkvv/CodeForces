#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<char> arr(n);
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
        int max_len = 1;
        int cur_len = 1;
        for(int i = 0; i < n -1; i++){
          if(arr[i] == arr[i+1]){
            cur_len++;
          }
          else{
            max_len = max(max_len, cur_len);
            cur_len = 1;
          }
        }
        max_len = max(max_len, cur_len);
        cout<<max_len+1<<endl;
    }
 
    return 0;
}