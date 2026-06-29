#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> arr;
 
        if (n == 2) {
            // gaps for 1: (3,1,2) and for 2: (1,3,2) — both valid
            arr = {1, 2, 2, 1, 1, 2, 1, 2};
        } else {
            // Seg1+Seg2: adjacent pairs 1,1,2,2,...,n,n
            for (int x = 1; x <= n; x++) {
                arr.push_back(x);
                arr.push_back(x);
            }
 
            // Seg3: 1, 2, ..., n-2, n, n-1  (swap last two elements)
            for (int x = 1; x <= n - 2; x++) arr.push_back(x);
            arr.push_back(n);
            arr.push_back(n - 1);
 
            // Seg4: 1, 2, ..., n
            for (int x = 1; x <= n; x++) arr.push_back(x);
        }
 
        for (int i = 0; i < (int)arr.size(); i++) {
            if (i) cout << " ";
            cout << arr[i];
        }
        cout << "
";
    }
    return 0;
}