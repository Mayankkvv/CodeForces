#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      ll n;
      cin >> n;
      while(n%2 == 0){
        n = n/2;
      }
      if(n > 1){
        cout<<"YES
";
      }
      else{
        cout <<"NO
";
      }
    }
 
    return 0;
}