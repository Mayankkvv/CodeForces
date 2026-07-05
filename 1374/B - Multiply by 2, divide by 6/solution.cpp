#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      ll n; 
      cin >> n;
      ll c2 = 0;
      ll c3 = 0;
      while(n > 0 && n % 3 ==0){
        c3++;
        n = n /3;
      }
      while(n > 0 && n % 2 ==0){
        c2++;
        n = n /2;
      }
      if(n > 1 || c2 > c3){
        cout <<"-1
";
      }else{
        cout << c3 + (c3-c2)<< endl;
      }
    }
 
    return 0;
}