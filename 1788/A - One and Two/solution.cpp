#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, cur = 0, tot = 0;
        cin >> n;
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2)
                tot++;
        }
 
        if (tot % 2 != 0) {
            cout << -1 << endl;
        }
        else if (tot == 0) {
            cout << 1 << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (arr[i] == 2)
                    cur++;
 
                if (cur == tot / 2) {
                    cout << i + 1 << endl;
                    break;      
                }
            }
        }
    }
 
    return 0;
}