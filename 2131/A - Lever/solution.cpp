#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
 
        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) moves += a[i] - b[i];
        }
 
        cout << moves + 1 << "
";
    }
    return 0;
}