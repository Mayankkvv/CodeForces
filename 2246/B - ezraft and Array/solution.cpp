#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n == 1) {
            cout << 1 << "
";
        }
        else if (n == 2) {
            cout << -1 << "
";
        }
        else {
            vector<ll> arr = {1, 2, 3};
            ll S = 6;
 
            for (int i = 4; i <= n; i++) {
                arr.push_back(S);
                S *= 2;
            }
 
            for (int i = 0; i < arr.size(); i++) {
                cout << arr[i]<<" ";
            }
            cout << "
";
        }
    }
 
    return 0;
}