#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
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
        map<int,int> mpp;
        for(int i =0; i < n; i++){
          mpp[arr[i]]++;
        }
        int max_freq = 0;
        for(auto it : mpp){
          max_freq = max(max_freq, it.second);
        }
        int op = 0;
        while(max_freq < n){
          op++;
          if(max_freq*2 < n){
            op += max_freq;
            max_freq *= 2;
          }else{
            op += n - max_freq;
            max_freq = n;
          }
        }
        cout<< op << endl;
    }
 
    return 0;
}