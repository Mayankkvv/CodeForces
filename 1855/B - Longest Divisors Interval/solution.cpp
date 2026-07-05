#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
        int i = 1;
        while(n % i == 0){
          i++;
        }
        cout<<i - 1 << endl;
    }
 
    return 0;
}