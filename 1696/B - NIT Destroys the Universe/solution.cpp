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
        int zeros = 0;
        for(int i =0; i < n; i++){
          if(arr[i] == 0){
            zeros++;
          }
        }
        bool flag = false;
        int l = 0;
        int r = n-1;
        while(arr[l] == 0) l++;
        while(arr[r] == 0) r--;
        for(int i = l; i <= r; i++){
          if(arr[i] == 0){
            flag = true;
          }
        }
        if(zeros == n){
          cout<<0<<endl;
          continue;
        }
        if(flag == false){
          cout<<1<<endl;
        }else{
          cout<<2<<endl;
        }
    }
 
    return 0;
}