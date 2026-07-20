#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin>>s;
        int n=s.size();
        int c0=0, c1=0;
        for(int i = 0; i < n; i++){
          if(s[i] == '1') c1++;
          else c0++;
        }
        int s_t = 0;
        for(int i = 0; i <n;i++){
          if(s[i] == '1' && c0 > 0){
            s_t++;
            c0--;
          }
          else if(s[i] == '0' && c1 > 0){
            s_t++;
            c1--;
          }
          else{
            break;
          }
        }
        cout<<n - s_t<<endl;
    }
 
    return 0;
}