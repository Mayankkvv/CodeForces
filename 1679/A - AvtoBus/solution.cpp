#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ll t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
        if(n < 4 || n%2 == 1){
          cout<<"-1
";
        }
        else{
          ll min_bus = (n+5)/6;
          ll max_bus = n/4;
          cout<<min_bus<<" "<<max_bus<<endl;
        }
    }
 
    return 0;
}