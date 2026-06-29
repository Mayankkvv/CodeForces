#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int maxi = max(arr[0], 2 * (x - arr[n - 1]));
 
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, arr[i + 1] - arr[i]);
        }
 
        cout << maxi << "
";
    }
 
    return 0;
}